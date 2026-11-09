/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$Initialize
void Rotatelab_Scripts_ControllerFacebook__Initialize (Rotatelab_Scripts_ControllerFacebook_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$Initialize
   void Rotatelab_Scripts_ControllerFacebook__Initialize (Rotatelab_Scripts_ControllerFacebook_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFacebook__Initialize_105fd6c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 uVar14;
  int *piVar15;
  
  pcVar13 = (char *)(_UNK_0106fef4 + 0x106fd80);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fef8 + 0x106fd94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fefc + 0x106fda0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ff00 + 0x106fdac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ff04 + 0x106fdb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ff08 + 0x106fdc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ff0c + 0x106fdd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ff10 + 0x106fddc));
    *pcVar13 = '\x01';
  }
  piVar15 = *(int **)(_UNK_0106ff14 + 0x106fdf0);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Facebook_Unity_FB__get_IsInitialized_118c748(0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0106ff18 + 0x106fe3c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
              (iVar1,**(undefined4 **)(_UNK_0106ff1c + 0x106fe60),0);
    uVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106ff20 + 0x106fe74));
    Facebook_Unity_InitDelegate___ctor_1194388
              (uVar14,param_1,**(undefined4 **)(_UNK_0106ff24 + 0x106fe90),0);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106ff28 + 0x106fea4));
    Facebook_Unity_HideUnityDelegate___ctor_119443c
              (uVar2,param_1,**(undefined4 **)(_UNK_0106ff2c + 0x106fec0),0);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_0119cd70 + 0x119cc70);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0119cd74 + 0x119cc84),uVar2,0,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0119cd78 + 0x119cc90));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0119cd7c + 0x119cc9c));
      *pcVar13 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0119cd80 + 0x119ccb0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Facebook_Unity_Settings_FacebookSettings__get_AppId_11b2c00(0);
    uVar4 = Facebook_Unity_Settings_FacebookSettings__get_ClientToken_11b2cbc(0);
    uVar5 = Facebook_Unity_Settings_FacebookSettings__get_Cookie_11b2e70(0);
    uVar6 = Facebook_Unity_Settings_FacebookSettings__get_Logging_11b2f8c(0);
    uVar7 = Facebook_Unity_Settings_FacebookSettings__get_Status_11b30a8(0);
    uVar8 = Facebook_Unity_Settings_FacebookSettings__get_Xfbml_11b31c4(0);
    uVar9 = Facebook_Unity_Settings_FacebookSettings__get_FrictionlessRequests_11b3590(0);
    if (*(int *)(**(int **)(_UNK_0119cd84 + 0x119cd20) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Facebook_Unity_FB__Init_118cd8c
              (uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,0,
               **(undefined4 **)(_UNK_0119cd88 + 0x119cd48),uVar2,uVar14);
    return;
  }
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar13 = (char *)(_UNK_0119e680 + 0x119e570);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0119e684 + 0x119e584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0119e688 + 0x119e590));
    *pcVar13 = '\x01';
  }
  piVar15 = *(int **)(_UNK_0119e68c + 0x119e5a4);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar10 = (int *)Facebook_Unity_FB__get_FacebookImpl_118b674();
  pcVar13 = (char *)(_UNK_0119e690 + 0x119e5c8);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0119e694 + 0x119e5dc));
    *pcVar13 = '\x01';
  }
  iVar1 = *piVar15;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar15;
  }
  uVar14 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar10;
  uVar12 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_0119e698 + 0x119e620)) {
        puVar11 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0x128);
        goto LAB_0119e668;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar12 != 0);
  }
  puVar11 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0119e698 + 0x119e620),0xd);
LAB_0119e668:
                    /* WARNING: Could not recover jumptable at 0x0119e67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar11)(piVar10,uVar14,puVar11[1]);
  return;
}

