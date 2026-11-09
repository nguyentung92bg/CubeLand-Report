/* IL2CPP: Rotatelab.Scripts.ObjectManager$$DestroyAllWalls
void Rotatelab_Scripts_ObjectManager__DestroyAllWalls (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$DestroyAllWalls
   void Rotatelab_Scripts_ObjectManager__DestroyAllWalls (Rotatelab_Scripts_ObjectManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__DestroyAllWalls_102f248(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  pcVar9 = (char *)(_UNK_0103f758 + 0x103f268);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f75c + 0x103f27c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f760 + 0x103f288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f764 + 0x103f294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f768 + 0x103f2a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f76c + 0x103f2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f770 + 0x103f2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f774 + 0x103f2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f778 + 0x103f2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f77c + 0x103f2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f780 + 0x103f2e8));
    *pcVar9 = '\x01';
  }
  uVar10 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103f784 + 0x103f2fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar10,0,0);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) != 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_0103f788 + 0x103f360),
                           *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xc));
      pfVar14 = (float *)(iVar3 + 0x10);
      uVar13 = 0;
      fVar16 = _UNK_0103f754;
      while( true ) {
        if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar11 = *(int *)(param_1 + 0x60);
        if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) <= (int)uVar13) break;
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar11 = System_Collections_Generic_List_object___get_Item_267d814
                           (iVar11,uVar13,**(undefined4 **)(_UNK_0103f78c + 0x103f3b8));
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar15 = fVar16;
        if (*(char *)(iVar11 + 0x1c) == '\0') {
          Rotatelab_Scripts_WallController__get_Position_105e270(&iStack_58,iVar11,0);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar15 = (float)VectorSignedToFloat(iStack_50 * iStack_50 +
                                              iStack_54 * iStack_54 + iStack_58 * iStack_58,
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar15 = SQRT(fVar15);
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar15) << 0x1f |
                  (uint)(fVar16 == fVar15) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar16) || NAN(fVar15)) << 0x1c;
          *pfVar14 = fVar15;
          bVar2 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar15 = fVar16;
          }
        }
        fVar16 = fVar15;
        pfVar14 = pfVar14 + 1;
        uVar13 = uVar13 + 1;
      }
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(iVar11 + 0xc);
      pfVar14 = (float *)(iVar3 + 0x10);
      if (0x1ff < iVar11) {
        iVar11 = 0x200;
      }
      uVar13 = 0;
      iVar8 = 0;
      iStack_5c = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x60) + 0xc) <= (int)uVar13) break;
        if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x60),uVar13,
                           **(undefined4 **)(_UNK_0103f790 + 0x103f4c4));
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iVar4 + 0x1c) == '\0') {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          fVar15 = *pfVar14 / fVar16 + -1.0 + 1.0;
          fVar15 = *(float *)(param_1 + 0x74) * (1.0 - fVar15 * fVar15);
          iVar5 = **(int **)(_UNK_0103f794 + 0x103f530);
          if ((int)uVar13 < iVar8) {
            if (*(int *)(iVar5 + 0x74) == 0) {
              FUN_00ec3934();
              iVar5 = **(int **)(_UNK_0103f798 + 0x103f554);
            }
            puVar7 = *(undefined4 **)(iVar5 + 0x5c);
            iVar12 = puVar7[1];
            if (iVar12 == 0) {
              if (*(int *)(iVar5 + 0x74) == 0) {
                FUN_00ec3934();
                puVar7 = *(undefined4 **)(**(int **)(_UNK_0103f79c + 0x103f580) + 0x5c);
              }
              uVar10 = *puVar7;
              iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103f7a0 + 0x103f590));
              System_Action_object____ctor_1f11414
                        (iVar12,uVar10,**(undefined4 **)(_UNK_0103f7a4 + 0x103f5b0),0);
              piVar6 = (int *)(*(int *)(**(int **)(_UNK_0103f7a8 + 0x103f5c8) + 0x5c) + 4);
              *piVar6 = iVar12;
              thunk_FUN_00ec5080(piVar6,iVar12);
            }
            if (*(int *)(**(int **)(_UNK_0103f7ac + 0x103f5e4) + 0x74) == 0) {
              FUN_00ec3934();
            }
            PrimeTween_Tween__Delay_object__15d6154
                      (&iStack_58,iVar4,fVar15,iVar12,0,0,
                       **(undefined4 **)(_UNK_0103f7b0 + 0x103f60c));
          }
          else {
            if (*(int *)(iVar5 + 0x74) == 0) {
              FUN_00ec3934();
              iVar5 = **(int **)(_UNK_0103f7b4 + 0x103f63c);
            }
            puVar7 = *(undefined4 **)(iVar5 + 0x5c);
            iVar8 = puVar7[2];
            if (iVar8 == 0) {
              if (*(int *)(iVar5 + 0x74) == 0) {
                FUN_00ec3934();
                puVar7 = *(undefined4 **)(**(int **)(_UNK_0103f7b8 + 0x103f668) + 0x5c);
              }
              uVar10 = *puVar7;
              iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103f7bc + 0x103f678));
              System_Action_object____ctor_1f11414
                        (iVar8,uVar10,**(undefined4 **)(_UNK_0103f7c0 + 0x103f698),0);
              piVar6 = (int *)(*(int *)(**(int **)(_UNK_0103f7c4 + 0x103f6b0) + 0x5c) + 8);
              *piVar6 = iVar8;
              thunk_FUN_00ec5080(piVar6,iVar8);
            }
            if (*(int *)(**(int **)(_UNK_0103f7c8 + 0x103f6cc) + 0x74) == 0) {
              FUN_00ec3934();
            }
            PrimeTween_Tween__Delay_object__15d6154
                      (&iStack_58,iVar4,fVar15,iVar8,0,0,
                       **(undefined4 **)(_UNK_0103f7cc + 0x103f6f4));
            if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iStack_5c = iStack_5c + 1;
            iVar8 = func_0x00f88028(*(int *)(*(int *)(param_1 + 0x60) + 0xc) * iStack_5c,iVar11);
          }
        }
        pfVar14 = pfVar14 + 1;
        uVar13 = uVar13 + 1;
      }
    }
  }
  return;
}

