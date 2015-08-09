#include "Vip.h"
#include "VipCPPInfo.h"
#include "VipJavaInfo.h"
#include "VipWebInfo.h"
#include "VipArmInfo.h"

#ifndef VIPMGR_H_H_H
#define VIPMGR_H_H_H

void DisplayInfoMenu();
void DisplayAll();
void DisplayCpp();
void DisplayJava();
void DisplayWeb();
void DisplayArm();

void AddInfoMenu();
void AddCpp();
void AddJava();
void AddWeb();
void AddArm();

void DeleteInfoMenu();
void DeleteAll();
void DeleteVip();

void SearchInfoMenu();
void SearchVip(const string& studentId);

void LoadInfo();
void StoreInfo();

#endif