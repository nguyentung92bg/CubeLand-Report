/* IL2CPP: Rotatelab.HomePageCoordinator.<DrainNextFrame>d__18$$MoveNext
bool Rotatelab_HomePageCoordinator__DrainNextFrame_d__18__MoveNext (Rotatelab_HomePageCoordinator__DrainNextFrame_d__18_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator.<DrainNextFrame>d__18$$MoveNext
   bool Rotatelab_HomePageCoordinator__DrainNextFrame_d__18__MoveNext
   (Rotatelab_HomePageCoordinator__DrainNextFrame_d__18_o* __this, const MethodInfo* method); */

bool Rotatelab_HomePageCoordinator__DrainNextFrame_d__18__MoveNext_107a764(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0108aa98 + 0x108a77c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aa9c + 0x108a790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aaa0 + 0x108a79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aaa4 + 0x108a7a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aaa8 + 0x108a7b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aaac + 0x108a7c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aab0 + 0x108a7cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aab4 + 0x108a7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aab8 + 0x108a7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aabc + 0x108a7f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aac0 + 0x108a7fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108aac4 + 0x108a808));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  uStack_30 = 0;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar4 + 0x1c) = 0;
    if ((*(char *)(iVar4 + 0x1d) == '\0') && (*(char *)(iVar4 + 0x14) == '\0')) {
      if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Count_2000974
                        (*(int *)(iVar4 + 0x10),**(undefined4 **)(_UNK_0108aac8 + 0x108a888));
      if (iVar1 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0108aacc + 0x108a8a4);
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar1,0);
          if (iVar1 == 1) {
            if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Keys_2000984
                              (*(int *)(iVar4 + 0x10),**(undefined4 **)(_UNK_0108aad0 + 0x108a91c));
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_KeyCollection_Int32Enum__object___GetEnumerator_2542b30
                      (&uStack_30,iVar1,**(undefined4 **)(_UNK_0108aad4 + 0x108a944));
            uStack_38 = 0;
            puVar6 = *(undefined4 **)(_UNK_0108aad8 + 0x108a968);
            iVar1 = 0x7fffffff;
            puStack_34 = &uStack_30;
            while (iVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___MoveNext_21dd334
                                     (&uStack_30,*puVar6), iVar2 != 0) {
              if (iStack_24 < iVar1) {
                iVar1 = iStack_24;
              }
            }
            func_0x00b89538(&uStack_38);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_2000c3c
                              (*(int *)(iVar4 + 0x10),iVar1,
                               **(undefined4 **)(_UNK_0108aadc + 0x108aa08));
            if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_Int32Enum__object___Remove_2002528
                      (*(int *)(iVar4 + 0x10),iVar1,**(undefined4 **)(_UNK_0108aae0 + 0x108aa34));
            puStack_34 = (undefined4 *)0x0;
            uStack_38 = 0;
            System_Nullable_Int32Enum____ctor_17db29c
                      (&uStack_38,iVar1,**(undefined4 **)(_UNK_0108aae4 + 0x108aa4c));
            *(undefined4 *)(iVar4 + 0x14) = uStack_38;
            *(undefined4 **)(iVar4 + 0x18) = puStack_34;
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          }
        }
      }
    }
  }
  return iVar5 == 0;
}

