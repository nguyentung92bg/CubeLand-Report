/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$Show
void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Show (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027bc0) */
/* WARNING: Removing unreachable block (ram,0x01027bc8) */
/* WARNING: Removing unreachable block (ram,0x01027bcc) */
/* WARNING: Removing unreachable block (ram,0x014984c8) */
/* WARNING: Removing unreachable block (ram,0x014984e0) */
/* WARNING: Removing unreachable block (ram,0x014984e8) */
/* WARNING: Removing unreachable block (ram,0x014984f0) */
/* WARNING: Removing unreachable block (ram,0x014984f4) */
/* WARNING: Removing unreachable block (ram,0x01498514) */
/* WARNING: Removing unreachable block (ram,0x0149852c) */
/* WARNING: Removing unreachable block (ram,0x01498530) */
/* WARNING: Removing unreachable block (ram,0x01498544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$Show
   void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Show
   (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method); */

uint Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Show_113f7c8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_0114f938 + 0x114f7e0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f93c + 0x114f7f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f940 + 0x114f800));
    *pcVar7 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x10),1,0);
  iVar8 = *(int *)(param_1 + 0x14);
  pcVar7 = (char *)(_UNK_0114f944 + 0x114f844);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f948 + 0x114f858));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_0114f94c + 0x114f86c);
  puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar8,*puVar1,puVar1[1],puVar1[2],0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  pcVar7 = (char *)(_UNK_0114f950 + 0x114f8ac);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f954 + 0x114f8c0));
    *pcVar7 = '\x01';
  }
  iVar8 = *(int *)(*piVar10 + 0x5c);
  uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar9,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),
                     *(undefined4 *)(iVar8 + 0x14),0x3e800000,0);
  DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
            (uVar9,9,**(undefined4 **)(_UNK_0114f958 + 0x114f8f4));
  iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f95c + 0x114f908));
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(iVar8 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar8 + 0x1c) == 0) {
    FUN_00efd7c4(iVar8);
  }
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  iVar2 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar1 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined4 *)FUN_00efdb38(piVar10,iVar3,4);
LAB_01494a00:
  uVar4 = (*(code *)*puVar1)(piVar10,param_1,puVar1[1]);
  if (uVar4 == 0) {
    iVar8 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar3 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar8) {
          puVar1 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar10,iVar8,2);
LAB_01494a8c:
    (*(code *)*puVar1)(piVar10,param_1,puVar1[1]);
  }
  return uVar4 ^ 1;
}

