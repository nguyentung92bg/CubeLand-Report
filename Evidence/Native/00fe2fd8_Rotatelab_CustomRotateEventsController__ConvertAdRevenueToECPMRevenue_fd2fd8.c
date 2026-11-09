/* IL2CPP: Rotatelab.CustomRotateEventsController$$ConvertAdRevenueToECPMRevenue
float Rotatelab_CustomRotateEventsController__ConvertAdRevenueToECPMRevenue (Rotatelab_CustomRotateEventsController_o* __this, double adRevenue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ConvertAdRevenueToECPMRevenue
   float Rotatelab_CustomRotateEventsController__ConvertAdRevenueToECPMRevenue
   (Rotatelab_CustomRotateEventsController_o* __this, double adRevenue, const MethodInfo* method);
    */

float Rotatelab_CustomRotateEventsController__ConvertAdRevenueToECPMRevenue_fd2fd8
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  pcVar2 = (char *)(_UNK_00fe3104 + 0xfe2ff8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3108 + 0xfe300c));
    *pcVar2 = '\x01';
  }
  fVar4 = _UNK_00fe3100;
  if ((0.0 < (double)CONCAT44(param_4,param_3)) && ((param_4 & 0x7fffffff) < 0x7ff00000)) {
    piVar1 = *(int **)(_UNK_00fe310c + 0xfe3044);
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar5 = _UNK_00fe30f8;
    pcVar2 = (char *)(_UNK_00fe3110 + 0xfe3064);
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3114 + 0xfe3078));
      *pcVar2 = '\x01';
    }
    dVar5 = (double)CONCAT44(param_4,param_3) * dVar5;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar5 = (double)System_Math__Round_2b702b4(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),4,0,0)
    ;
    fVar3 = (float)dVar5;
    if ((ABS(fVar3) != INFINITY) && (fVar4 = fVar3, fVar3 <= 0.0)) {
      fVar4 = _UNK_00fe3100;
    }
  }
  return fVar4;
}

