/* IL2CPP: Rotatelab.IAP.PurchasesListener$$BeginPurchase
void Rotatelab_IAP_PurchasesListener__BeginPurchase (Rotatelab_IAP_PurchasesListener_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$BeginPurchase
   void Rotatelab_IAP_PurchasesListener__BeginPurchase (Rotatelab_IAP_PurchasesListener_o* __this,
   Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__BeginPurchase_1095dc0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int unaff_r8;
  int *piVar11;
  int *piVar12;
  undefined1 uStack_21;
  
  pcVar8 = (char *)(_UNK_010a63a8 + 0x10a5ddc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63ac + 0x10a5df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63b0 + 0x10a5dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63b4 + 0x10a5e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63b8 + 0x10a5e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63bc + 0x10a5e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63c0 + 0x10a5e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63c4 + 0x10a5e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63c8 + 0x10a5e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63cc + 0x10a5e50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63d0 + 0x10a5e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63d4 + 0x10a5e68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63d8 + 0x10a5e74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63dc + 0x10a5e80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63e0 + 0x10a5e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63e4 + 0x10a5e98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a63e8 + 0x10a5ea4));
    *pcVar8 = '\x01';
  }
  uStack_21 = 0;
  iVar2 = Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog_109a5ac();
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      if (*(int *)(**(int **)(_UNK_010a63ec + 0x10a6070) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogError_35b238c(**(undefined4 **)(_UNK_010a63f0 + 0x10a6090),0);
      uStack_21 = Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48(param_1);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_21,0);
      Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog_109a67c();
    }
    else {
      piVar11 = (int *)(param_1 + 0x2c);
      if (*piVar11 == 0) {
        piVar10 = *(int **)(param_1 + 0x20);
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *piVar10;
        piVar12 = *(int **)(_UNK_010a6418 + 0x10a60d4);
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        iVar5 = *piVar12;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_010a611c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar10,iVar5,0);
LAB_010a611c:
        iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = UnityEngine_Purchasing_ProductCollection__WithID_32ae42c
                          (iVar2,*(undefined4 *)(param_2 + 8),0);
        cVar1 = '\0';
        if (iVar2 != 0) {
          cVar1 = *(char *)(iVar2 + 0x10);
          unaff_r8 = iVar2;
        }
        if (iVar2 != 0 && cVar1 != '\0') {
          *(int *)(param_1 + 0x2c) = param_2;
          thunk_FUN_00ec5080(piVar11,param_2);
          if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                            (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010a641c + 0x10a6240));
          uVar9 = *(undefined4 *)(param_2 + 8);
          piVar11 = *(int **)(param_2 + 0x10);
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar4 = (**(code **)(*piVar11 + 0xe0))(piVar11,*(undefined4 *)(*piVar11 + 0xe4));
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = System_Collections_Generic_Dictionary_object__object___TryAdd_206b3d4
                            (iVar2,uVar9,uVar4,**(undefined4 **)(_UNK_010a6420 + 0x10a6298));
          if (iVar2 != 0) {
            piVar11 = *(int **)(param_1 + 0x40);
            if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar11 + 0xf0))(piVar11,*(undefined4 *)(*piVar11 + 0xf4));
          }
          if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),1,0);
          piVar11 = *(int **)(_UNK_010a6424 + 0x10a62f8);
          iVar2 = *piVar11;
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            iVar2 = *piVar11;
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x4c);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_GameAction__Raise_fc08b8(iVar2,0);
          piVar11 = *(int **)(param_1 + 0x20);
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *piVar11;
          iVar5 = *piVar12;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar10[-1] == iVar5) {
                puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 200);
                goto LAB_010a638c;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)FUN_00efdb38(piVar11,iVar5,1);
LAB_010a638c:
                    /* WARNING: Could not recover jumptable at 0x010a63a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(piVar11,unaff_r8,puVar3[1]);
          return;
        }
        uVar9 = System_String__Concat_29fee38
                          (**(undefined4 **)(_UNK_010a6428 + 0x10a6180),*(undefined4 *)(param_2 + 8)
                           ,0);
        if (*(int *)(**(int **)(_UNK_010a642c + 0x10a6198) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogError_35b238c(uVar9,0);
        iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                          (**(undefined4 **)(_UNK_010a6430 + 0x10a61c4));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = **(undefined4 **)(_UNK_010a6434 + 0x10a61e4);
        puVar3 = *(undefined4 **)(_UNK_010a6438 + 0x10a61f0);
      }
      else {
        iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010a63f4 + 0x10a5eec),5);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = **(undefined4 **)(_UNK_010a63f8 + 0x10a5f0c);
        if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x10) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar9);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = *(undefined4 *)(param_2 + 8);
        if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x14) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar9);
        uVar9 = **(undefined4 **)(_UNK_010a63fc + 0x10a5f74);
        if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x18) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x18),uVar9);
        if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = *(undefined4 *)(*piVar11 + 8);
        if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x1c) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x1c),uVar9);
        uVar9 = **(undefined4 **)(_UNK_010a6400 + 0x10a5fd8);
        if (*(uint *)(iVar2 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x20) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x20),uVar9);
        uVar9 = System_String__Concat_2a0bee8(iVar2,0);
        if (*(int *)(**(int **)(_UNK_010a6404 + 0x10a600c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogError_35b238c(uVar9,0);
        iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                          (**(undefined4 **)(_UNK_010a6408 + 0x10a6038));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = **(undefined4 **)(_UNK_010a640c + 0x10a6058);
        puVar3 = *(undefined4 **)(_UNK_010a6410 + 0x10a6064);
      }
      Rotatelab_UI_GenericDialog__Show_1111834
                (iVar2,**(undefined4 **)(_UNK_010a6414 + 0x10a61fc),*puVar3,uVar9,0,0);
    }
  }
  return;
}

