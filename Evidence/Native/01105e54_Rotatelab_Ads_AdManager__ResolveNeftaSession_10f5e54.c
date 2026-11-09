/* IL2CPP: Rotatelab.Ads.AdManager$$ResolveNeftaSession
void Rotatelab_Ads_AdManager__ResolveNeftaSession (Rotatelab_Ads_AdManager_o* __this, Rotatelab_Ads_AdManager_NeftaSession_o session, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$ResolveNeftaSession
   void Rotatelab_Ads_AdManager__ResolveNeftaSession (Rotatelab_Ads_AdManager_o* __this,
   Rotatelab_Ads_AdManager_NeftaSession_o session, const MethodInfo* method); */

void Rotatelab_Ads_AdManager__ResolveNeftaSession_10f5e54
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01106268 + 0x1105e74);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110626c + 0x1105e94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106270 + 0x1105ea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106274 + 0x1105eac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106278 + 0x1105eb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110627c + 0x1105ec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106280 + 0x1105ed0));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  System_Nullable_AdManager_NeftaSession____ctor_17e2880
            (&uStack_40,param_2,param_3,param_4,param_5,param_6,param_7,
             **(undefined4 **)(_UNK_01106284 + 0x1105ef8));
  *(undefined4 *)(param_1 + 0x28) = uStack_34;
  *(undefined4 *)(param_1 + 0x2c) = uStack_30;
  *(undefined4 *)(param_1 + 0x30) = uStack_2c;
  *(undefined4 *)(param_1 + 0x34) = uStack_28;
  *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_34,uStack_38);
  thunk_FUN_00ec5080(param_1 + 0x24,0);
  piVar6 = *(int **)(_UNK_01106288 + 0x1105f54);
  iVar1 = *piVar6;
  iVar4 = *(int *)(iVar1 + 0x74);
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x78) != '\0') {
    piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0110628c + 0x1105f8c),6);
    iVar4 = *(int *)(_UNK_01106290 + 0x1105fa4);
    uStack_40 = param_2;
    iVar1 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_40);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar1 != 0) &&
       (iVar2 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[4] = iVar1;
    thunk_FUN_00ec5080(piVar6 + 4,iVar1);
    if ((param_3 != 0) &&
       (iVar1 = thunk_FUN_00f00bc8(param_3,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if ((uint)piVar6[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[5] = param_3;
    thunk_FUN_00ec5080(piVar6 + 5,param_3);
    uStack_44 = param_4;
    iVar1 = FUN_00ec393c(**(undefined4 **)(_UNK_01106294 + 0x1106064),&uStack_44);
    if ((iVar1 != 0) &&
       (iVar2 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if ((uint)piVar6[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[6] = iVar1;
    thunk_FUN_00ec5080(piVar6 + 6,iVar1);
    if ((param_5 != 0) &&
       (iVar1 = thunk_FUN_00f00bc8(param_5,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if ((uint)piVar6[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[7] = param_5;
    thunk_FUN_00ec5080(piVar6 + 7,param_5);
    uStack_48 = param_6;
    iVar1 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_48);
    if ((iVar1 != 0) &&
       (iVar2 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if ((uint)piVar6[3] < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[8] = iVar1;
    thunk_FUN_00ec5080(piVar6 + 8,iVar1);
    uStack_4c = param_7;
    iVar1 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_4c);
    if ((iVar1 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if ((uint)piVar6[3] < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6[9] = iVar1;
    thunk_FUN_00ec5080(piVar6 + 9,iVar1);
    uVar3 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_01106298 + 0x11061e4),piVar6,0);
    if (*(int *)(**(int **)(_UNK_0110629c + 0x11061f8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(uVar3,0);
  }
  piVar6 = (int *)(param_1 + 0x38);
  iVar1 = *piVar6;
  *piVar6 = 0;
  thunk_FUN_00ec5080(piVar6,0);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,param_4,param_5,param_6,param_7,
               *(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

