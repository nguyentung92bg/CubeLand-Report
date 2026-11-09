/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$Show
void Rotatelab_Boosters_UI_BoosterPurchasePopup__Show (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, Rotatelab_Boosters_BoosterBaseData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011348ac) */
/* WARNING: Removing unreachable block (ram,0x011348b4) */
/* WARNING: Removing unreachable block (ram,0x011348b8) */
/* WARNING: Removing unreachable block (ram,0x011348d8) */
/* WARNING: Removing unreachable block (ram,0x011348e4) */
/* WARNING: Removing unreachable block (ram,0x011348e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$Show
   void Rotatelab_Boosters_UI_BoosterPurchasePopup__Show
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, Rotatelab_Boosters_BoosterBaseData_o*
   data, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup__Show_1136a60(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01146b0c + 0x1146a78);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146b10 + 0x1146a8c));
    *pcVar5 = '\x01';
  }
  param_1[0x15] = param_2;
  thunk_FUN_00ec5080(param_1 + 0x15,param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(param_2 + 0x20);
  param_1[7] = iVar6;
  if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34(param_1[0xd],**(undefined4 **)(_UNK_01146b14 + 0x1146ae0),uVar7,0)
  ;
  param_1[0x16] = param_1[7] * *(int *)(param_2 + 0x1c);
  pcVar5 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760));
    *pcVar5 = '\x01';
  }
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar5 = '\x01';
  }
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__InsertUnique_object__14873f8
                    (uVar7,param_1,**(undefined4 **)(_UNK_01134924 + 0x1134848));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (1 < *(int *)(*(int *)(iVar6 + 0x10) + 0xc)) {
    if (*(int *)(iVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar6 + 0x10),1,**(undefined4 **)(_UNK_01134928 + 0x1134894));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar7,uVar7,0);
  }
  pcVar5 = (char *)(_UNK_01134fac + 0x1134f14);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
    *pcVar5 = '\x01';
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
        puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
        goto LAB_01134f94;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return;
}

