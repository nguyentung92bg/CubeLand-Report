/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnMenuItemNeedToPositioningHandler
void Rotatelab_Shop_BaseOfferButtonsParent__OnMenuItemNeedToPositioningHandler (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, UnityEngine_Transform_o* member, int32_t direction, int32_t childIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010dde68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnMenuItemNeedToPositioningHandler
   void Rotatelab_Shop_BaseOfferButtonsParent__OnMenuItemNeedToPositioningHandler
   (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, UnityEngine_Transform_o* member, int32_t
   direction, int32_t childIndex, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__OnMenuItemNeedToPositioningHandler_10cd870
               (int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  
  pcVar10 = (char *)(_UNK_010ddab0 + 0x10dd88c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddab4 + 0x10dd8a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddab8 + 0x10dd8b0));
    *pcVar10 = '\x01';
  }
  if (param_3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615940(param_2,*(undefined4 *)(param_1 + 0x14),0);
    iVar8 = *(int *)(param_1 + 0x30);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ddabc + 0x10dd9dc));
    System_Object___ctor_2bb93bc(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar2 + 8) = param_2;
    thunk_FUN_00ec5080((int *)(iVar2 + 8),param_2);
    *(undefined4 *)(iVar2 + 0xc) = param_4;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar11 = *(int **)(_UNK_010ddac0 + 0x10dda3c);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar4) {
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38);
LAB_010dda94:
      System_Collections_Generic_List_object___AddWithResize_267dae0(iVar8,iVar2,uVar1);
      goto LAB_010dda9c;
    }
    *(uint *)(iVar8 + 0xc) = uVar4 + 1;
    iVar7 = iVar7 + uVar4 * 4;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__SetParent_3615940(param_2,*(undefined4 *)(param_1 + 0x10),0);
      }
      goto LAB_010dda9c;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615940(param_2,*(undefined4 *)(param_1 + 0x18),0);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ddac4 + 0x10dd924));
    System_Object___ctor_2bb93bc(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar2 + 8) = param_2;
    thunk_FUN_00ec5080((int *)(iVar2 + 8),param_2);
    *(undefined4 *)(iVar2 + 0xc) = param_4;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar11 = *(int **)(_UNK_010ddac8 + 0x10dd984);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar4) {
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38);
      goto LAB_010dda94;
    }
    *(uint *)(iVar8 + 0xc) = uVar4 + 1;
    iVar7 = iVar7 + uVar4 * 4;
  }
  *(int *)(iVar7 + 0x10) = iVar2;
  thunk_FUN_00ec5080((int *)(iVar7 + 0x10),iVar2);
LAB_010dda9c:
  Rotatelab_Shop_BaseOfferButtonsParent__ApplyOrder_10cdaf0(*(undefined4 *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  pcVar10 = (char *)(_UNK_010ddeb8 + 0x10ddb08);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddebc + 0x10ddb1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec0 + 0x10ddb28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec4 + 0x10ddb34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec8 + 0x10ddb40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddecc + 0x10ddb4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded0 + 0x10ddb58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded4 + 0x10ddb64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded8 + 0x10ddb70));
    *pcVar10 = '\x01';
  }
  piVar11 = *(int **)(_UNK_010ddedc + 0x10ddb88);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar9 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ddee0 + 0x10ddbd4));
    System_Func_object__int____ctor_239b264
              (iVar8,uVar9,**(undefined4 **)(_UNK_010ddee4 + 0x10ddbf4),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar11 = iVar8;
    thunk_FUN_00ec5080(piVar11,iVar8);
  }
  piVar11 = (int *)System_Linq_Enumerable__OrderBy_object__int__146d7a0
                             (uVar1,iVar8,**(undefined4 **)(_UNK_010ddee8 + 0x10ddc20));
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar11;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010ddeec + 0x10ddc48)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_010ddc90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar11,**(int **)(_UNK_010ddeec + 0x10ddc48),0);
LAB_010ddc90:
  piVar11 = (int *)(*(code *)*puVar3)(piVar11,puVar3[1]);
  piVar5 = *(int **)(_UNK_010ddef0 + 0x10ddcc0);
  piVar12 = *(int **)(_UNK_010ddef4 + 0x10ddcc8);
  iVar2 = 0;
  do {
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_010ddd28;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar11,*piVar5,0);
LAB_010ddd28:
    iVar8 = (*(code *)*puVar3)(piVar11,puVar3[1]);
    if (iVar8 == 0) {
      if (piVar11 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar11;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 == 0) goto LAB_010dde34;
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_010ddda0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar11,*piVar12,0);
LAB_010ddda0:
    iVar8 = (*(code *)*puVar3)(piVar11,puVar3[1]);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetSiblingIndex_3616e84(*(int *)(iVar8 + 8),iVar2,0);
    iVar2 = iVar2 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 2;
    if (uVar4 == 0) break;
    if (piVar5[-1] == **(int **)(_UNK_010ddef8 + 0x10dde08)) {
      puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
      goto LAB_010dde50;
    }
  }
LAB_010dde34:
  puVar3 = (undefined4 *)FUN_00efdb38(piVar11,**(int **)(_UNK_010ddef8 + 0x10dde08),0);
LAB_010dde50:
  (*(code *)*puVar3)(piVar11,puVar3[1]);
  return;
}

