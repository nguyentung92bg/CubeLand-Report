/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnPlayOnRequestedHandler
void Rotatelab_CustomRotateEventsController__OnPlayOnRequestedHandler (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnPlayOnRequestedHandler
   void Rotatelab_CustomRotateEventsController__OnPlayOnRequestedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_UI_PlayOnOffer_o offer, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnPlayOnRequestedHandler_fc88dc
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_00fd8f6c + 0xfd88f8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f70 + 0xfd890c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f74 + 0xfd8918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f78 + 0xfd8924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f7c + 0xfd8930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f80 + 0xfd893c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f84 + 0xfd8948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f88 + 0xfd8954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8f8c + 0xfd8960));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(uint *)(iVar1 + 0x78);
  puVar2 = *(undefined4 **)(_UNK_00fd8f90 + 0xfd89a0);
  *(uint *)(iVar1 + 0x78) = uVar5 + 1;
  *(uint *)(iVar1 + 0x7c) = *(int *)(iVar1 + 0x7c) + (uint)(0xfffffffe < uVar5);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&iStack_48,iVar1,0);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fd8f94 + 0xfd8a04),9);
  piVar9 = *(int **)(_UNK_00fd8f98 + 0xfd8a28);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar2 = *(undefined4 **)(_UNK_00fd8f9c + 0xfd8a4c);
  uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xb0);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,8,0,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[4] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 4,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xb4);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,bStack_30 & 1,0,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[5] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 5,iVar1);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,uStack_40,uStack_3c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[6] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 6,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x18);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,uStack_38,uStack_34,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[7] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 7,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x20);
  if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iStack_48 + 0xc);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,iVar4,iVar4 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[8] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 8,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x24);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar7,uStack_2c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[9] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 9,iVar1);
  uVar8 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x28);
  uVar7 = UnityEngine_Object__get_name_36081bc(iStack_48,0);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar8,uVar7,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[10] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 10,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x1c);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,iStack_44,iStack_44 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xb] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 0xb,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xb8);
  iVar1 = thunk_FUN_00f00cdc(*puVar2);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar7,param_2,param_2 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar3[3] < 9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xc] = iVar1;
  thunk_FUN_00ec5080(piVar3 + 0xc,iVar1);
  piVar9 = *(int **)(_UNK_00fd8fa0 + 0xfd8ef0);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (*(int *)(**(int **)(_UNK_00fd8fa4 + 0xfd8f10) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fd8fa4 + 0xfd8f10));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar7,piVar3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fd8fa8 + 0xfd8f48),**(undefined4 **)(_UNK_00fd8fa8 + 0xfd8f48))
  ;
  Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
            (param_1,**(undefined4 **)(_UNK_00fd8fac + 0xfd8f5c),0);
  return;
}

