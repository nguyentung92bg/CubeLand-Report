/* IL2CPP: Rotatelab.IAP.IapObject$$<Initialize>b__3_0
void Rotatelab_IAP_IapObject___Initialize_b__3_0 (Rotatelab_IAP_IapObject_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.IapObject$$<Initialize>b__3_0
   void Rotatelab_IAP_IapObject___Initialize_b__3_0 (Rotatelab_IAP_IapObject_o* __this, const
   MethodInfo* method); */

void Rotatelab_IAP_IapObject___Initialize_b__3_0_1095d54(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int unaff_r8;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_21 [9];
  
  pcVar9 = (char *)(_UNK_010a5db4 + 0x10a5d68);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5db8 + 0x10a5d7c));
    *pcVar9 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a5dbc + 0x10a5d90));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_010a63a8 + 0x10a5ddc);
  if (*pcVar9 == '\0') {
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
    *pcVar9 = '\x01';
  }
  auStack_21[0] = 0;
  iVar3 = Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog_109a5ac();
  if (iVar3 == 0) {
    if (*(char *)(iVar2 + 0x28) == '\0') {
      if (*(int *)(**(int **)(_UNK_010a63ec + 0x10a6070) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogError_35b238c(**(undefined4 **)(_UNK_010a63f0 + 0x10a6090),0);
      auStack_21[0] = Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48(iVar2);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(auStack_21,0);
      Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog_109a67c();
    }
    else {
      piVar12 = (int *)(iVar2 + 0x2c);
      if (*piVar12 == 0) {
        piVar11 = *(int **)(iVar2 + 0x20);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *piVar11;
        piVar13 = *(int **)(_UNK_010a6418 + 0x10a60d4);
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar6 = *piVar13;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar6) {
              puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
              goto LAB_010a611c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar11,iVar6,0);
LAB_010a611c:
        iVar3 = (*(code *)*puVar4)(piVar11,puVar4[1]);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Purchasing_ProductCollection__WithID_32ae42c
                          (iVar3,*(undefined4 *)(param_1 + 8),0);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + 0x10);
          unaff_r8 = iVar3;
        }
        if (iVar3 != 0 && cVar1 != '\0') {
          *(int *)(iVar2 + 0x2c) = param_1;
          thunk_FUN_00ec5080(piVar12,param_1);
          if (*(int *)(iVar2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                            (*(int *)(iVar2 + 0x40),**(undefined4 **)(_UNK_010a641c + 0x10a6240));
          uVar10 = *(undefined4 *)(param_1 + 8);
          piVar12 = *(int **)(param_1 + 0x10);
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = (**(code **)(*piVar12 + 0xe0))(piVar12,*(undefined4 *)(*piVar12 + 0xe4));
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = System_Collections_Generic_Dictionary_object__object___TryAdd_206b3d4
                            (iVar3,uVar10,uVar5,**(undefined4 **)(_UNK_010a6420 + 0x10a6298));
          if (iVar3 != 0) {
            piVar12 = *(int **)(iVar2 + 0x40);
            if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar12 + 0xf0))(piVar12,*(undefined4 *)(*piVar12 + 0xf4));
          }
          if (*(int *)(iVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar2 + 0x18),1,0);
          piVar12 = *(int **)(_UNK_010a6424 + 0x10a62f8);
          iVar3 = *piVar12;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar12;
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x4c);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
          piVar12 = *(int **)(iVar2 + 0x20);
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *piVar12;
          iVar3 = *piVar13;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar11[-1] == iVar3) {
                puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 200);
                goto LAB_010a638c;
              }
              uVar7 = uVar7 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar3,1);
LAB_010a638c:
                    /* WARNING: Could not recover jumptable at 0x010a63a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar4)(piVar12,unaff_r8,puVar4[1]);
          return;
        }
        uVar10 = System_String__Concat_29fee38
                           (**(undefined4 **)(_UNK_010a6428 + 0x10a6180),
                            *(undefined4 *)(param_1 + 8),0);
        if (*(int *)(**(int **)(_UNK_010a642c + 0x10a6198) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogError_35b238c(uVar10,0);
        iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                          (**(undefined4 **)(_UNK_010a6430 + 0x10a61c4));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar10 = **(undefined4 **)(_UNK_010a6434 + 0x10a61e4);
        puVar4 = *(undefined4 **)(_UNK_010a6438 + 0x10a61f0);
      }
      else {
        iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010a63f4 + 0x10a5eec),5);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar10 = **(undefined4 **)(_UNK_010a63f8 + 0x10a5f0c);
        if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x10) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar10);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar10 = *(undefined4 *)(param_1 + 8);
        if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x14) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar10);
        uVar10 = **(undefined4 **)(_UNK_010a63fc + 0x10a5f74);
        if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x18) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x18),uVar10);
        if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar10 = *(undefined4 *)(*piVar12 + 8);
        if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x1c) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x1c),uVar10);
        uVar10 = **(undefined4 **)(_UNK_010a6400 + 0x10a5fd8);
        if (*(uint *)(iVar2 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar2 + 0x20) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x20),uVar10);
        uVar10 = System_String__Concat_2a0bee8(iVar2,0);
        if (*(int *)(**(int **)(_UNK_010a6404 + 0x10a600c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogError_35b238c(uVar10,0);
        iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                          (**(undefined4 **)(_UNK_010a6408 + 0x10a6038));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar10 = **(undefined4 **)(_UNK_010a640c + 0x10a6058);
        puVar4 = *(undefined4 **)(_UNK_010a6410 + 0x10a6064);
      }
      Rotatelab_UI_GenericDialog__Show_1111834
                (iVar2,**(undefined4 **)(_UNK_010a6414 + 0x10a61fc),*puVar4,uVar10,0,0);
    }
  }
  return;
}

