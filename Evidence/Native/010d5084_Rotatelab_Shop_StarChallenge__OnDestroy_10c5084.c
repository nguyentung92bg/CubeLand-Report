/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnDestroy
void Rotatelab_Shop_StarChallenge__OnDestroy (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnDestroy
   void Rotatelab_Shop_StarChallenge__OnDestroy (Rotatelab_Shop_StarChallenge_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__OnDestroy_10c5084(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  pcVar9 = (char *)(_UNK_010d5124 + 0x10d5098);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5128 + 0x10d50ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d512c + 0x10d50b8));
    *pcVar9 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x20) + 0xb4);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d5130 + 0x10d50dc));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (iVar1,param_1,**(undefined4 **)(_UNK_010d5134 + 0x10d50fc),0);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = System_Delegate__get_Method_2bc0a70(iVar1,0,0);
  iVar1 = *(int *)(iVar10 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_0362a48c + 0x362a178);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a490 + 0x362a18c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a494 + 0x362a198));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a498 + 0x362a1a4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a49c + 0x362a1b0));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a4a0 + 0x362a1bc));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a4a4 + 0x362a1c8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a4a8 + 0x362a1d4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a4ac + 0x362a1e0));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a4b0 + 0x362a1ec));
    *pcVar9 = '\x01';
  }
  piVar2 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0362a4b4 + 0x362a200));
  System_Collections_Generic_List_object____ctor_267d274
            (piVar2,**(undefined4 **)(_UNK_0362a4b8 + 0x362a214));
  iVar10 = 0;
  while( true ) {
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar1 + 0xc);
    if (*(int *)(*(int *)(iVar1 + 0xc) + 0xc) <= iVar10) break;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (iVar11,iVar10,**(undefined4 **)(_UNK_0362a4bc + 0x362a260));
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = (**(code **)(*piVar3 + 0xe8))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar11 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(iVar1 + 0xc),iVar10,**(undefined4 **)(_UNK_0362a4c0 + 0x362a2c0));
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = piVar2[2];
      uVar12 = piVar2[3];
      piVar3 = *(int **)(_UNK_0362a4c4 + 0x362a2f8);
      piVar2[4] = piVar2[4] + 1;
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar12 < *(uint *)(iVar11 + 0xc)) {
        piVar2[3] = uVar12 + 1;
        puVar5 = (undefined4 *)(iVar11 + uVar12 * 4 + 0x10);
        *puVar5 = uVar4;
        thunk_FUN_00ec5080(puVar5,uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (piVar2,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
      }
    }
    iVar10 = iVar10 + 1;
  }
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0362a4c8 + 0x362a360));
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Predicate_object____ctor_1876380(uVar6,piVar2,*(undefined4 *)(*piVar2 + 300),0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___RemoveAll_267f260
            (iVar11,uVar6,**(undefined4 **)(_UNK_0362a4cc + 0x362a3a8));
  if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(*(int *)(iVar1 + 8) + 0xc);
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar1 + 0xc) + 0xc);
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0362a4d0 + 0x362a3e0));
    System_Collections_Generic_List_object____ctor_267d2e8
              (iVar11,iVar7 + iVar10,**(undefined4 **)(_UNK_0362a4d4 + 0x362a3fc));
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___AddRange_267dcf0
              (iVar11,*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_0362a4d8 + 0x362a420));
    System_Collections_Generic_List_object___AddRange_267dcf0
              (iVar11,*(undefined4 *)(iVar1 + 0xc),**(undefined4 **)(_UNK_0362a4e0 + 0x362a464));
    *(int *)(iVar1 + 0x10) = iVar11;
    thunk_FUN_00ec5080((int *)(iVar1 + 0x10),iVar11);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

