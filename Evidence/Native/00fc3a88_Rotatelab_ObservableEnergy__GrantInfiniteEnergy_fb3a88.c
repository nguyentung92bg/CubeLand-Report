/* IL2CPP: Rotatelab.ObservableEnergy$$GrantInfiniteEnergy
void Rotatelab_ObservableEnergy__GrantInfiniteEnergy (Rotatelab_ObservableEnergy_o* __this, int64_t durationInSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy$$GrantInfiniteEnergy
   void Rotatelab_ObservableEnergy__GrantInfiniteEnergy (Rotatelab_ObservableEnergy_o* __this,
   int64_t durationInSeconds, const MethodInfo* method); */

void Rotatelab_ObservableEnergy__GrantInfiniteEnergy_fb3a88
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = (char *)(_UNK_00fc3bbc + 0xfc3aa8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3bc0 + 0xfc3abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3bc4 + 0xfc3ac8));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if ((int)(uint)(param_3 == 0) <= param_4) {
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_00fc3bc8 + 0xfc3af4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_48,0);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uVar4 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_38,0);
    if (*(int *)(**(int **)(_UNK_00fc3bcc + 0xfc3b48) + 0x74) == 0) {
      FUN_00ec3934();
    }
    lVar5 = System_Math__Max_2b6fe2c(uVar3,uVar2,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
    *(longlong *)(param_1 + 0x58) = lVar5 + CONCAT44(param_4,param_3);
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_58,0);
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar4 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_38,0);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    Rotatelab_ObservableEnergy__UpdateTimers_fb32f0(param_1,uVar2,(int)uVar4,uVar2);
  }
  return;
}

