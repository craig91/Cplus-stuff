#pragma once  // This says to include the header file once. This functions as a header guide. It prevents including a single header file multiple times into a single translation unit. To emphasize, it DOES NOT prevent me from including the header file to different parts of my program, it only prevents including the file multiple times into a single translation unit.

void Log(const char* message);
void InitLog();