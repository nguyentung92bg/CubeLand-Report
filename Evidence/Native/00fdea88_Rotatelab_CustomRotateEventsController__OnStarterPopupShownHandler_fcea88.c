/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnStarterPopupShownHandler
void Rotatelab_CustomRotateEventsController__OnStarterPopupShownHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnStarterPopupShownHandler
   void Rotatelab_CustomRotateEventsController__OnStarterPopupShownHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnStarterPopupShownHandler_fcea88(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(_UNK_00fded00 + 0xfdea9c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded04 + 0xfdeab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded08 + 0xfdeabc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded0c + 0xfdeac8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded10 + 0xfdead4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded14 + 0xfdeae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded18 + 0xfdeaec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fded1c + 0xfdeaf8));
    *pcVar6 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fded20 + 0xfdeb10),2);
  piVar8 = *(int **)(_UNK_00fded24 + 0xfdeb24);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fded28 + 0xfdeb44) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fded28 + 0xfdeb44));
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar3,0);
  puVar9 = *(undefined4 **)(_UNK_00fded2c + 0xfdeb88);
  iVar2 = thunk_FUN_00f00cdc(*puVar9);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,uVar7,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  uVar3 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18);
  uVar7 = Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar7,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar9);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,uVar3,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar2 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar4 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 5,iVar2);
  piVar8 = *(int **)(_UNK_00fded30 + 0xfdec9c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x40);
  if (*(int *)(**(int **)(_UNK_00fded34 + 0xfdecbc) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fded34 + 0xfdecbc));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar7,piVar1,0);
  uVar7 = **(undefined4 **)(_UNK_00fded38 + 0xfdecf4);
  pcVar6 = (char *)(_UNK_00fd83d8 + 0xfd8350);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83dc + 0xfd8364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83e0 + 0xfd8370));
    *pcVar6 = '\x01';
  }
  piVar1 = *(int **)(_UNK_00fd83e4 + 0xfd8384);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar1;
  }
  if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x78) == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_00fd83e8 + 0xfd83b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar6 = '\x01';
  }
  piVar1 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
    *pcVar6 = '\x01';
  }
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar1;
  }
  piVar1 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar9 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined4 *)thunk_FUN_00efdb38(piVar1,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(piVar1,3,uVar7,puVar9[1]);
  return;
}

