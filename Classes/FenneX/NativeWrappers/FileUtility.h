//
//  FileUtility.h
//  ClassIt
//
//  Created by François Dupayrat on 10/06/15.
//
//

#ifndef ClassIt_FileUtility_h
#define ClassIt_FileUtility_h

#include <string>

/*Locking a file is useful on Android to lock a file to be sure other apps do not use it at the same time.
 Warning: it is NOT a way to lock file from other process in the same app.
 Since there is no way to have a file shared between apps on iOS, there is no iOS implementation, just placeholders.
*/

//Return true if the file is properly locked, otherwise false. iOS will always return false
bool lockFile(std::string filename);

//Return the file contents, which must be locked otherwise. If it's not locked or on iOS, it will return an empty reponse
std::string getLockedFileContents(std::string filename);

//Write on a locked file and return true if it's successful. If it's not locked or on iOS, it will return false
bool writeLockedFile(std::string filename, std::string content);

//Unlock a previously locked file
void unlockFile(std::string filename);

#endif
