/* IL2CPP: Rotatelab.Networking.SatoriBundleConfigFlag$$TryApply
bool Rotatelab_Networking_SatoriBundleConfigFlag__TryApply (Rotatelab_Networking_SatoriBundleConfigFlag_o* __this, Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o* config, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriBundleConfigFlag$$TryApply
   bool Rotatelab_Networking_SatoriBundleConfigFlag__TryApply
   (Rotatelab_Networking_SatoriBundleConfigFlag_o* __this,
   Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o* config, const MethodInfo* method); */

undefined4 Rotatelab_Networking_SatoriBundleConfigFlag__TryApply_fe7620(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_00ff7f48 + 0xff763c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f4c + 0xff7650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f50 + 0xff765c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f54 + 0xff7668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f58 + 0xff7674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f5c + 0xff7680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f60 + 0xff768c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f64 + 0xff7698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f68 + 0xff76a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f6c + 0xff76b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f70 + 0xff76bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f74 + 0xff76c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f78 + 0xff76d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f7c + 0xff76e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f80 + 0xff76ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f84 + 0xff76f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f88 + 0xff7704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f8c + 0xff7710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f90 + 0xff771c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f94 + 0xff7728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f98 + 0xff7734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7f9c + 0xff7740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fa0 + 0xff774c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fa4 + 0xff7758));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fa8 + 0xff7764));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fac + 0xff7770));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fb0 + 0xff777c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fb4 + 0xff7788));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fb8 + 0xff7794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fbc + 0xff77a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fc0 + 0xff77ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7fc4 + 0xff77b8));
    *pcVar8 = '\x01';
  }
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(param_2 + 8),0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00ff7fc8 + 0xff7810));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_IAP_PurchasesListener__IsInCatalog_1099f28
                      (iVar1,*(undefined4 *)(param_2 + 8),0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff7fe4 + 0xff7914));
        System_Collections_Generic_List_object____ctor_267d2e8
                  (iVar2,iVar1,**(undefined4 **)(_UNK_00ff7fe8 + 0xff792c));
        if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___GetEnumerator_267e7a4
                  (&uStack_58,*(int *)(param_2 + 0x10),**(undefined4 **)(_UNK_00ff7fec + 0xff795c));
        uStack_38 = uStack_58;
        puStack_34 = puStack_54;
        uStack_30 = uStack_50;
        iStack_2c = iStack_4c;
        uStack_58 = 0;
        puStack_54 = &uStack_38;
        while (iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                 (&uStack_38,**(undefined4 **)(_UNK_00ff8030 + 0xff7984)),
              iVar1 = iStack_2c, iVar4 != 0) {
          iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff7ff0 + 0xff79a8));
          System_Object___ctor_2bb93bc(iVar4,0);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = *(undefined4 *)(iVar1 + 8);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(*(int *)(_UNK_00ff7ff4 + 0xff79e0) + 0x4c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar5 = System_Enum__TryParse_Int32Enum__1460e68
                            (uVar3,(undefined4 *)(iVar4 + 8),
                             **(undefined4 **)(_UNK_00ff7ff8 + 0xff7a00));
          if (iVar5 == 0) {
LAB_00ff7b8c:
            iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_00ff800c + 0xff7b98),6);
            iVar4 = param_1[2];
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *(int *)(iVar2 + 0x10) = iVar4;
            thunk_FUN_00ec5080((int *)(iVar2 + 0x10),iVar4);
            uVar3 = **(undefined4 **)(_UNK_00ff8010 + 0xff7be0);
            if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *(undefined4 *)(iVar2 + 0x14) = uVar3;
            thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar3);
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar3 = *(undefined4 *)(param_2 + 8);
            if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *(undefined4 *)(iVar2 + 0x18) = uVar3;
            thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x18),uVar3);
            uVar3 = **(undefined4 **)(_UNK_00ff8014 + 0xff7c40);
            if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *(undefined4 *)(iVar2 + 0x1c) = uVar3;
            thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x1c),uVar3);
            uVar3 = *(undefined4 *)(iVar1 + 8);
            if (*(uint *)(iVar2 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *(undefined4 *)(iVar2 + 0x20) = uVar3;
            thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x20),uVar3);
            uVar3 = **(undefined4 **)(_UNK_00ff8018 + 0xff7c90);
            if (5 < *(uint *)(iVar2 + 0xc)) {
              *(undefined4 *)(iVar2 + 0x24) = uVar3;
              thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x24),uVar3);
              uVar3 = System_String__Concat_2a0bee8(iVar2,0);
              if (*(int *)(**(int **)(_UNK_00ff801c + 0xff7ccc) + 0x74) == 0) {
                FUN_00ec3934();
              }
              UnityEngine_Debug__LogError_35b238c(uVar3,0);
              System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                        (&uStack_38,**(undefined4 **)(_UNK_00ff8020 + 0xff7cf8));
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar5 = param_1[4];
          uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff7ffc + 0xff7a28));
          System_Predicate_SatoriBundleConfigFlag_CurrencyIcon____ctor_187a91c
                    (uVar3,iVar4,**(undefined4 **)(_UNK_00ff8000 + 0xff7a3c),0);
          if (*(int *)(**(int **)(_UNK_00ff8004 + 0xff7a58) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar5 = Rotatelab_Extensions__TryFind_SatoriBundleConfigFlag_CurrencyIcon__1489ab4
                            (iVar5,uVar3,&uStack_40,**(undefined4 **)(_UNK_00ff8008 + 0xff7a74));
          if (iVar5 == 0) goto LAB_00ff7b8c;
          iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff8024 + 0xff7a9c));
          ShopBundleSO_BundleOfferDetails___ctor_fa7478(iVar5,0);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(undefined4 *)(iVar5 + 0xc) = uStack_3c;
          *(undefined4 *)(iVar5 + 8) = uVar3;
          thunk_FUN_00ec5080();
          uVar3 = *(undefined4 *)(iVar1 + 0x10);
          uVar7 = *(undefined4 *)(iVar1 + 0x14);
          iVar4 = **(int **)(_UNK_00ff8028 + 0xff7af8);
          if (*(int *)(iVar1 + 0x18) != 0) {
            iVar4 = *(int *)(iVar1 + 0x18);
          }
          *(int *)(iVar5 + 0x18) = iVar4;
          *(undefined4 *)(iVar5 + 0x10) = uVar3;
          *(undefined4 *)(iVar5 + 0x14) = uVar7;
          thunk_FUN_00ec5080();
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = *(int *)(iVar2 + 8);
          uVar10 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_00ff802c + 0xff7b3c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar10 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar10 + 1;
            piVar6 = (int *)(iVar1 + uVar10 * 4 + 0x10);
            *piVar6 = iVar5;
            thunk_FUN_00ec5080(piVar6,iVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar2,iVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38)
                      );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_00ff8034 + 0xff7d10));
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff803c + 0xff7d24));
        System_Predicate_object____ctor_1876380
                  (uVar3,param_1,**(undefined4 **)(_UNK_00ff8040 + 0xff7d40),0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = System_Collections_Generic_List_object___Exists_267e190
                          (iVar2,uVar3,**(undefined4 **)(_UNK_00ff8044 + 0xff7d64));
        if (iVar1 != 0) {
          iVar1 = param_1[5];
          uStack_44 = 0;
          uStack_48 = 0;
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_48 = *(undefined4 *)(param_2 + 8);
          thunk_FUN_00ec5080(&uStack_48);
          uStack_44 = *(undefined4 *)(param_2 + 0xc);
          thunk_FUN_00ec5080((uint)&uStack_48 | 4);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(undefined4 *)(iVar1 + 0xc) = uStack_48;
          *(undefined4 *)(iVar1 + 0x10) = uStack_44;
          thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),0);
          iVar1 = param_1[5];
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = System_Collections_Generic_List_object___ToArray_267f7a0
                            (iVar2,**(undefined4 **)(_UNK_00ff8050 + 0xff7dfc));
          if (iVar1 != 0) {
            puVar9 = (undefined4 *)(iVar1 + 0x1c);
            *puVar9 = uVar3;
            thunk_FUN_00ec5080(puVar9,uVar3);
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = param_1[2];
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = *(undefined4 *)(param_2 + 8);
        uStack_58 = (**(code **)(*param_1 + 0xe8))(param_1,*(undefined4 *)(*param_1 + 0xec));
        uVar3 = FUN_00ec393c(**(undefined4 **)(_UNK_00ff8048 + 0xff7e64),&uStack_58);
        uVar3 = System_String__Format_2a0c2b4
                          (**(undefined4 **)(_UNK_00ff804c + 0xff7e90),iVar1,uVar7,uVar3,0);
      }
      else {
        uVar3 = System_String__Concat_2a0bdec
                          (param_1[2],**(undefined4 **)(_UNK_00ff7fdc + 0xff7870),
                           *(undefined4 *)(param_2 + 8),**(undefined4 **)(_UNK_00ff7fd8 + 0xff7864),
                           0);
      }
      if (*(int *)(**(int **)(_UNK_00ff7fe0 + 0xff7890) + 0x74) == 0) {
        FUN_00ec3934();
      }
      goto LAB_00ff78f0;
    }
  }
  uVar3 = System_String__Concat_2a0bdec
                    (param_1[2],**(undefined4 **)(_UNK_00ff7fd0 + 0xff78bc),
                     *(undefined4 *)(param_2 + 8),**(undefined4 **)(_UNK_00ff7fcc + 0xff78b0),0);
  if (*(int *)(**(int **)(_UNK_00ff7fd4 + 0xff78dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
LAB_00ff78f0:
  UnityEngine_Debug__LogError_35b238c(uVar3,0);
  return 0;
}

