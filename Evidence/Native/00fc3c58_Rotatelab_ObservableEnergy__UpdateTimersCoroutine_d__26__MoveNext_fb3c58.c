/* IL2CPP: Rotatelab.ObservableEnergy.<UpdateTimersCoroutine>d__26$$MoveNext
bool Rotatelab_ObservableEnergy__UpdateTimersCoroutine_d__26__MoveNext (Rotatelab_ObservableEnergy__UpdateTimersCoroutine_d__26_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy.<UpdateTimersCoroutine>d__26$$MoveNext
   bool Rotatelab_ObservableEnergy__UpdateTimersCoroutine_d__26__MoveNext
   (Rotatelab_ObservableEnergy__UpdateTimersCoroutine_d__26_o* __this, const MethodInfo* method); */

void Rotatelab_ObservableEnergy__UpdateTimersCoroutine_d__26__MoveNext_fb3c58(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_00fc3f58 + 0xfc3c70);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f5c + 0xfc3c84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f60 + 0xfc3c90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f64 + 0xfc3c9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f68 + 0xfc3ca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f6c + 0xfc3cb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f70 + 0xfc3cc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3f74 + 0xfc3ccc));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_50 = 0;
  iStack_48 = 0;
  uStack_54 = 0;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  dVar4 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
  if (*(double *)(param_1 + 0x10) <= dVar4) {
    if (*(int *)(**(int **)(_UNK_00fc3f78 + 0xfc3d78) + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar4 = (double)floor(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    iVar1 = *(int *)(**(int **)(_UNK_00fc3f7c + 0xfc3dac) + 0x74);
    *(double *)(param_1 + 0x10) = dVar4 + 1.0;
    if (iVar1 == 0) {
      FUN_00ec3934();
    }
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_68,0);
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    iStack_28 = iStack_60;
    uStack_24 = uStack_5c;
    uVar5 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_30,0);
    if (*(int *)(**(int **)(_UNK_00fc3f80 + 0xfc3df8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_IObservableValue__EnumerateInstances_object__14a48ec
              (&uStack_68,**(undefined4 **)(_UNK_00fc3f84 + 0xfc3e14));
    uStack_50 = CONCAT44(uStack_64,uStack_68);
    iStack_48 = iStack_60;
    Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___GetEnumerator_1e469ac
              (&uStack_68,&uStack_50,**(undefined4 **)(_UNK_00fc3f88 + 0xfc3e30));
    uStack_40 = CONCAT44(uStack_64,uStack_68);
    iStack_38 = iStack_60;
    puVar3 = *(undefined4 **)(_UNK_00fc3f8c + 0xfc3e64);
    while( true ) {
      uVar6 = Rotatelab_Scripts_WeakReferenceListEnumerator_object__object___MoveNext_1e469c0
                        (&uStack_40,*puVar3);
      if ((int)uVar6 == 0) break;
      if (iStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_ObservableEnergy__UpdateTimers_fb32f0
                (iStack_38,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                 (int)((ulonglong)uVar5 >> 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

