/* IL2CPP: Rotatelab.ObservableEnergy$$set_Value
void Rotatelab_ObservableEnergy__set_Value (Rotatelab_ObservableEnergy_o* __this, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy$$set_Value
   void Rotatelab_ObservableEnergy__set_Value (Rotatelab_ObservableEnergy_o* __this, int64_t value,
   const MethodInfo* method); */

void Rotatelab_ObservableEnergy__set_Value_fb31fc
               (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_00fc32e4 + 0xfc321c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc32e8 + 0xfc3230));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uVar5 = Rotatelab_ObservableLong__get_Value_fb2b94(param_1);
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  bVar4 = param_3 < (uint)uVar5;
  if ((int)(param_4 - (iVar1 + (uint)bVar4)) < 0 ==
      (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)bVar4))) {
    Rotatelab_ObservableLong__set_Value_fb2d14(param_1,iVar1,param_3,param_4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    bVar4 = *(int *)(param_1 + 0x50) != 0;
    if ((int)-(iVar1 + (uint)bVar4) < 0 == (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar4))) {
      Rotatelab_ObservableLong__set_Value_fb2d14(param_1,iVar1,param_3,param_4);
      if (*(int *)(**(int **)(_UNK_00fc32ec + 0xfc3284) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_38,0);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      uVar5 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_28,0);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      Rotatelab_ObservableEnergy__UpdateTimers_fb32f0(param_1,uVar2,(int)uVar5,uVar2);
    }
  }
  return;
}

