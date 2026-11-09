/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$ApplyOrder
void Rotatelab_Shop_BaseOfferButtonsParent__ApplyOrder (System_Collections_Generic_List_BaseOfferButtonsParent_MenuItems__o* menuItems, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010dde68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$ApplyOrder
   void Rotatelab_Shop_BaseOfferButtonsParent__ApplyOrder
   (System_Collections_Generic_List_BaseOfferButtonsParent_MenuItems__o* menuItems, const
   MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__ApplyOrder_10cdaf0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar6 = (char *)(_UNK_010ddeb8 + 0x10ddb08);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddebc + 0x10ddb1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec0 + 0x10ddb28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec4 + 0x10ddb34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec8 + 0x10ddb40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddecc + 0x10ddb4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded0 + 0x10ddb58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded4 + 0x10ddb64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded8 + 0x10ddb70));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010ddedc + 0x10ddb88);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar2[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar2;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ddee0 + 0x10ddbd4));
    System_Func_object__int____ctor_239b264
              (iVar7,uVar8,**(undefined4 **)(_UNK_010ddee4 + 0x10ddbf4),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar7;
    thunk_FUN_00ec5080(piVar9,iVar7);
  }
  piVar9 = (int *)System_Linq_Enumerable__OrderBy_object__int__146d7a0
                            (param_1,iVar7,**(undefined4 **)(_UNK_010ddee8 + 0x10ddc20));
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar9;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010ddeec + 0x10ddc48)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_010ddc90;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010ddeec + 0x10ddc48),0);
LAB_010ddc90:
  piVar9 = (int *)(*(code *)*puVar2)(piVar9,puVar2[1]);
  piVar4 = *(int **)(_UNK_010ddef0 + 0x10ddcc0);
  piVar10 = *(int **)(_UNK_010ddef4 + 0x10ddcc8);
  iVar1 = 0;
  do {
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar4) {
          puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
          goto LAB_010ddd28;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,*piVar4,0);
LAB_010ddd28:
    iVar7 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar7 == 0) {
      if (piVar9 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 == 0) goto LAB_010dde34;
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
          goto LAB_010ddda0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,*piVar10,0);
LAB_010ddda0:
    iVar7 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetSiblingIndex_3616e84(*(int *)(iVar7 + 8),iVar1,0);
    iVar1 = iVar1 + 1;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 2;
    if (uVar3 == 0) break;
    if (piVar4[-1] == **(int **)(_UNK_010ddef8 + 0x10dde08)) {
      puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
      goto LAB_010dde50;
    }
  }
LAB_010dde34:
  puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010ddef8 + 0x10dde08),0);
LAB_010dde50:
  (*(code *)*puVar2)(piVar9,puVar2[1]);
  return;
}

