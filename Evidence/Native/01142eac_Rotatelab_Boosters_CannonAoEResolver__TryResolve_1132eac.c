/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$TryResolve
bool Rotatelab_Boosters_CannonAoEResolver__TryResolve (Rotatelab_Scripts_BaseTargetableController_o* center, UnityEngine_Vector3_o hitWorldPoint, UnityEngine_Vector3_o hitWorldNormal, System_Collections_Generic_List_BaseTargetableController__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$TryResolve
   bool Rotatelab_Boosters_CannonAoEResolver__TryResolve
   (Rotatelab_Scripts_BaseTargetableController_o* center, UnityEngine_Vector3_o hitWorldPoint,
   UnityEngine_Vector3_o hitWorldNormal,
   System_Collections_Generic_List_BaseTargetableController__o* buffer, const MethodInfo* method);
    */

undefined4 Rotatelab_Boosters_CannonAoEResolver__TryResolve_1132eac(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pcVar8 = (char *)(_UNK_01143468 + 0x1142ed0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114346c + 0x1142ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143470 + 0x1142ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143474 + 0x1142efc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143478 + 0x1142f08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114347c + 0x1142f14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143480 + 18100000));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143484 + 0x1142f2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143488 + 0x1142f38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114348c + 0x1142f44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143490 + 0x1142f50));
    *pcVar8 = '\x01';
  }
  if (in_stack_0000000c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(in_stack_0000000c + 0xc);
  *(undefined4 *)(in_stack_0000000c + 0xc) = 0;
  *(int *)(in_stack_0000000c + 0x10) = *(int *)(in_stack_0000000c + 0x10) + 1;
  if (0 < iVar6) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(in_stack_0000000c + 8),0,iVar6,0);
  }
  piVar9 = *(int **)(_UNK_01143494 + 0x1142f98);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar11 = 0;
  iVar6 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar6 == 0) {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (((char)param_1[6] == '\0') &&
       (iVar6 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4)), iVar6 != 0
       )) {
      piVar14 = *(int **)(_UNK_01143498 + 0x1143008);
      piVar1 = (int *)thunk_FUN_00f00bc8(param_1,*piVar14);
      if (piVar1 != (int *)0x0) {
        iVar18 = *piVar1;
        iVar6 = *piVar14;
        uVar7 = (uint)*(ushort *)(iVar18 + 0xb6);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(int *)(iVar18 + 0x58) + 4);
          do {
            if (piVar14[-1] == iVar6) {
              puVar2 = (undefined4 *)(iVar18 + *piVar14 * 8 + 0xc0);
              goto LAB_01143068;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar1,iVar6,0);
LAB_01143068:
        iVar6 = (*(code *)*puVar2)(piVar1,puVar2[1]);
        if (iVar6 != 0) {
          iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0114349c + 0x114308c));
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = *(int *)(iVar6 + 0x50);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar11 = 0;
          iVar18 = UnityEngine_Object__op_Equality_36033f4(iVar6,0,0);
          if (iVar18 == 0) {
            uVar19 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
            iVar18 = (int)((ulonglong)uVar19 >> 0x20);
            iVar5 = (int)uVar19;
            if (iVar5 != 0) {
              iVar18 = *(int *)(iVar5 + 0xc);
            }
            if (iVar5 != 0 && iVar18 != 0) {
              iVar3 = *(int *)(iVar5 + 0x10);
              iVar4 = *(int *)(iVar5 + 0x14);
              iVar18 = *(int *)(iVar5 + 0x18);
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              UnityEngine_Transform__InverseTransformDirection_36166f8
                        (&fStack_4c,iVar6,in_stack_00000000,in_stack_00000004,in_stack_00000008,0);
              piVar9 = *(int **)(_UNK_011434a0 + 0x1143164);
              iVar6 = *piVar9;
              if (*(int *)(iVar6 + 0x74) == 0) {
                FUN_00ec3934();
                iVar6 = *piVar9;
              }
              iVar5 = 1;
              if (ABS(fStack_48) < ABS(fStack_44)) {
                iVar5 = 2;
              }
              iVar16 = 0;
              if (ABS(fStack_4c) < ABS(fStack_44)) {
                iVar16 = iVar5;
              }
              if (ABS(fStack_4c) < ABS(fStack_48)) {
                iVar16 = iVar5;
              }
              if (**(int **)(iVar6 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              System_Collections_Generic_HashSet_object___Clear_241fd60
                        (**(int **)(iVar6 + 0x5c),**(undefined4 **)(_UNK_011434a4 + 0x11431d8));
              if (in_stack_0000000c == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              func_0x00b8779c(in_stack_0000000c,param_1,**(undefined4 **)(_UNK_011434a8 + 0x11431fc)
                             );
              if (**(int **)(*piVar9 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              System_Collections_Generic_HashSet_object___Add_2420ac8
                        (**(int **)(*piVar9 + 0x5c),param_1,
                         **(undefined4 **)(_UNK_011434ac + 0x114322c));
              iVar6 = -1;
              do {
                iVar5 = -1;
                do {
                  if (iVar5 != 0 || iVar6 != 0) {
                    iVar15 = iVar6 + iVar3;
                    if (iVar16 == 1) {
                      iVar13 = iVar5 + iVar18;
                      iVar10 = iVar4;
                    }
                    else if (iVar16 == 0) {
                      iVar13 = iVar18 + iVar5;
                      iVar15 = iVar3;
                      iVar10 = iVar6 + iVar4;
                    }
                    else {
                      iVar13 = iVar18;
                      iVar10 = iVar4 + iVar5;
                    }
                    if (*(int *)(*piVar9 + 0x74) == 0) {
                      FUN_00ec3934();
                    }
                    Rotatelab_Boosters_CannonAoEResolver__TryAdd_11334fc
                              (iVar15,iVar10,iVar13,in_stack_0000000c);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 != 2);
                iVar6 = iVar6 + 1;
              } while (iVar6 != 2);
              if (in_stack_0000000c == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              uVar11 = 1;
              if (*(int *)(in_stack_0000000c + 0xc) < 9) {
                iVar6 = FUN_00ec388c(**(undefined4 **)(_UNK_011434b0 + 0x1143310),2);
                if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
                if (*(uint *)(iVar6 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                uVar7 = 0;
                *(undefined4 *)(iVar6 + 0x14) = 1;
                while( true ) {
                  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  uVar11 = 1;
                  if (*(int *)(iVar6 + 0xc) <= (int)uVar7) break;
                  if (in_stack_0000000c == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (8 < *(int *)(in_stack_0000000c + 0xc)) {
                    return 1;
                  }
                  if (*(uint *)(iVar6 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f07924();
                  }
                  iVar5 = -1;
                  iVar15 = *(int *)(iVar6 + uVar7 * 4 + 0x10);
                  do {
                    if (in_stack_0000000c == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (8 < *(int *)(in_stack_0000000c + 0xc)) break;
                    iVar13 = -1;
                    do {
                      iVar10 = iVar5;
                      iVar12 = iVar15;
                      iVar17 = iVar13;
                      if ((iVar16 != 1) && (iVar10 = iVar15, iVar12 = iVar5, iVar16 != 0)) {
                        iVar10 = iVar5;
                        iVar12 = iVar13;
                        iVar17 = iVar15;
                      }
                      if (*(int *)(*piVar9 + 0x74) == 0) {
                        FUN_00ec3934();
                      }
                      Rotatelab_Boosters_CannonAoEResolver__TryAdd_11334fc
                                (iVar10 + iVar3,iVar12 + iVar4,iVar17 + iVar18,in_stack_0000000c);
                      iVar13 = iVar13 + 1;
                    } while ((iVar13 != 2) && (*(int *)(in_stack_0000000c + 0xc) < 9));
                    iVar5 = iVar5 + 1;
                  } while (iVar5 != 2);
                  uVar7 = uVar7 + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar11;
}

