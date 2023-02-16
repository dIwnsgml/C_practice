#include  <windows.h>

static char szAppName[] = "ERR";

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam) 
{
   switch (iMsg) 
   {
   case WM_DESTROY :
      PostQuitMessage(0);
      break;
   }
   return DefWindowProc(hwnd, iMsg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) 
{
   HWND        hwnd;
   MSG         msg;
   WNDCLASS    wndclass;
   RECT        rect;

   wndclass.style         = 0;
   wndclass.lpfnWndProc   = WndProc;
   wndclass.cbClsExtra    = 0;
   wndclass.cbWndExtra    = 0;
   wndclass.hInstance     = hInstance;
   wndclass.hIcon         = LoadIcon(hInstance, szAppName);
   wndclass.hCursor       = LoadCursor(NULL, IDC_ARROW);
   wndclass.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
   wndclass.lpszMenuName  = szAppName;
   wndclass.lpszClassName = szAppName;
   RegisterClass(&wndclass);

   hwnd = CreateWindow(szAppName,
      szAppName,
      WS_OVERLAPPEDWINDOW | WS_VISIBLE,
      0, 0, 320, 240,
      NULL, NULL, hInstance, szCmdLine);

   while (GetMessage(&msg, NULL, 0, 0)) 
   {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
   }
   return (int)msg.wParam;
}
