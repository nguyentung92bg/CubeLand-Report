/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$Start
void Rotatelab_SagaMap_SagaMapController__Start (Rotatelab_SagaMap_SagaMapController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$Start
   void Rotatelab_SagaMap_SagaMapController__Start (Rotatelab_SagaMap_SagaMapController_o* __this,
   const MethodInfo* method); */

void Rotatelab_SagaMap_SagaMapController__Start_1081f20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_3c;
  
  pcVar7 = (char *)(_UNK_01092470 + 0x1091f44);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092474 + 0x1091f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092478 + 0x1091f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109247c + 0x1091f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092480 + 0x1091f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092484 + 0x1091f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092488 + 0x1091f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109248c + 0x1091fa0));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_3c = 0;
  uStack_50 = 0;
  if (*(int *)(**(int **)(_UNK_01092490 + 0x1091fc0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                                      (byte)(in_fpscr >> 0x16) & 3);
  pcVar7 = (char *)(_UNK_01092494 + 0x1092014);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092498 + 0x1092028));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0109249c + 0x1092040) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar12 = (float)FUN_01f4f1bc(fVar12 * 0.5);
  iVar10 = *(int *)(param_1 + 0x10);
  uVar9 = ~(int)fVar12;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (fVar12 == _UNK_0109246c) {
    uVar9 = 0x7fffffff;
  }
  iVar3 = *(int *)(iVar10 + 0xc) + uVar9;
  iVar4 = iVar2 - iVar3;
  if (iVar4 == 0 || iVar2 < iVar3) {
    iVar4 = 1;
  }
  iStack_3c = iVar4;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_60,iVar10,**(undefined4 **)(_UNK_010924a0 + 0x10920d0));
  piVar11 = (int *)(param_1 + 0x14);
  uStack_50 = uStack_60;
  uStack_4c = puStack_5c;
  uStack_48 = uStack_58;
  iStack_44 = iStack_54;
  uStack_60 = 0;
  puStack_5c = &uStack_50;
  do {
    iVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_50,**(undefined4 **)(_UNK_010924b8 + 0x1092100));
    iVar10 = iStack_44;
    if (iVar5 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_50,**(undefined4 **)(_UNK_010924bc + 0x109239c));
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 1) {
        iVar3 = iVar2 + -1;
      }
      Rotatelab_SagaMap_SagaMapController__ShowCurrentLevel_1082678(param_1,iVar3);
      return;
    }
    if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iStack_44 + 0x10);
    uVar1 = System_Int32__ToString_2b6b9ec(&iStack_3c,0);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2b4));
    if (iStack_3c < iVar2) {
      if (*(int *)(iVar10 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc
                (*(int *)(iVar10 + 0x1c),*(undefined4 *)(param_1 + 0x2c),0);
      if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc
                (*(int *)(iVar10 + 0x20),*(undefined4 *)(param_1 + 0x20),0);
      if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc
                (*(int *)(iVar10 + 0x24),*(undefined4 *)(param_1 + 0x20),0);
    }
    else {
      iVar5 = *(int *)(iVar10 + 0x1c);
      if (iVar2 == iStack_3c) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + 0x24),0);
        if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc
                  (*(int *)(iVar10 + 0x20),*(undefined4 *)(param_1 + 0x1c),0);
        if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc
                  (*(int *)(iVar10 + 0x24),*(undefined4 *)(param_1 + 0x20),0);
        iVar5 = *piVar11;
        if (*(int *)(**(int **)(_UNK_010924a4 + 0x1092254) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar5 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
        if (iVar5 != 0) {
          if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = *(int *)(*piVar11 + 0x18);
          if (*(char *)(_UNK_010924a8 + 0x10922a0) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_010924ac + 0x10922b4));
            *(undefined1 *)(_UNK_010924b0 + 0x10922c4) = 1;
          }
          iVar6 = *(int *)(**(int **)(_UNK_010924b4 + 0x10922d4) + 0x5c);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localScale_36155dc
                    (iVar5,*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),
                     *(undefined4 *)(iVar6 + 0x14),0);
        }
        *piVar11 = iVar10;
        thunk_FUN_00ec5080(piVar11,iVar10);
      }
      else {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + 0x28),0);
        if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc
                  (*(int *)(iVar10 + 0x20),*(undefined4 *)(param_1 + 0x1c),0);
        if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_UI_Image__set_sprite_37167cc
                  (*(int *)(iVar10 + 0x24),*(undefined4 *)(param_1 + 0x1c),0);
      }
    }
    iStack_3c = iStack_3c + 1;
  } while( true );
}

