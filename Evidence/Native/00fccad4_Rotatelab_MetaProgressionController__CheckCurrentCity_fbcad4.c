/* IL2CPP: Rotatelab.MetaProgressionController$$CheckCurrentCity
void Rotatelab_MetaProgressionController__CheckCurrentCity (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$CheckCurrentCity
   void Rotatelab_MetaProgressionController__CheckCurrentCity
   (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__CheckCurrentCity_fbcad4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_00fcce58 + 0xfccaec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce5c + 0xfccb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce60 + 0xfccb0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce64 + 0xfccb18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce68 + 0xfccb24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce6c + 0xfccb30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce70 + 0xfccb3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce74 + 0xfccb48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcce78 + 0xfccb54));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(iVar1 + 0x20);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar1 < *(int *)(iVar7 + 0xc)) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar6 + 0x10);
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = *(int **)(iVar1 + 0x20);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar7,uVar2,**(undefined4 **)(_UNK_00fcce7c + 0xfccc44));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar1 + 0xc) != '\0') {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x14);
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(iVar6 + 0x10),**(undefined4 **)(_UNK_00fcce80 + 0xfccc9c));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar8 = *(undefined4 **)(_UNK_00fcce84 + 0xfcccc4);
  piVar5 = *(int **)(_UNK_00fcce88 + 0xfccccc);
  puVar9 = *(undefined4 **)(_UNK_00fcce8c + 0xfcccd4);
  puStack_44 = &uStack_38;
  while( true ) {
    do {
      do {
        iVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                          (&uStack_38,*puVar8);
        iVar1 = iStack_2c;
        if (iVar7 == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&uStack_38,**(undefined4 **)(_UNK_00fcce90 + 0xfccdd8));
          return;
        }
        if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      } while (*(char *)(iStack_2c + 0xc) == '\0');
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      piVar3 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
    } while (iVar7 < *(int *)(iVar1 + 8));
    iVar7 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = *(int **)(iVar7 + 0x20);
    if (*(int *)(param_1 + 0x14) == 0) break;
    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___IndexOf_267e86c(iVar7,iVar1,*puVar9);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(*piVar3 + 0xfc);
    (**(code **)(*piVar3 + 0xf8))(piVar3,uVar2,iVar1,iVar1 >> 0x1f,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

