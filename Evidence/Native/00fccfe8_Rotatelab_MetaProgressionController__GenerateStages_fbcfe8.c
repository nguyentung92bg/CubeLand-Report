/* IL2CPP: Rotatelab.MetaProgressionController$$GenerateStages
void Rotatelab_MetaProgressionController__GenerateStages (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$GenerateStages
   void Rotatelab_MetaProgressionController__GenerateStages (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__GenerateStages_fbcfe8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uStack_40;
  float fStack_3c;
  
  pcVar4 = (char *)(_UNK_00fcd53c + 0xfcd008);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd540 + 0xfcd01c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd544 + 0xfcd028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd548 + 0xfcd034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd54c + 0xfcd040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd550 + 0xfcd04c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd554 + 0xfcd058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd558 + 0xfcd064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd55c + 0xfcd070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd560 + 0xfcd07c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd564 + 0xfcd088));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd568 + 0xfcd094));
    *pcVar4 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = *(int *)(**(int **)(_UNK_00fcd56c + 0xfcd0ac) + 0x74);
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (iVar2 == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar5,uVar6,**(undefined4 **)(_UNK_00fcd570 + 0xfcd0d8));
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_RectOffset__get_top_35baee4(iVar7,0);
  iVar7 = UnityEngine_RectOffset__get_bottom_35baf54(iVar7,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_40,iVar2,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = (float)VectorSignedToFloat(iVar7 + iVar1,(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = fStack_3c + fVar12;
  iVar2 = *(int *)(iVar2 + 0xc);
  if (-1 < iVar2 + -1) {
    puVar9 = *(undefined4 **)(_UNK_00fcd574 + 0xfcd1a4);
    puVar11 = *(undefined4 **)(_UNK_00fcd578 + 0xfcd1ac);
    do {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = iVar2 + -1;
      iVar7 = System_Collections_Generic_List_object___get_Item_267d814(iVar7,iVar2,*puVar9);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar7 + 8);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar10 <= *(int *)(iVar1 + 0xc)) {
        uVar5 = *(undefined4 *)(param_1 + 0x28);
        iVar1 = 0x18;
        if (*(char *)(iVar7 + 0xc) == '\0') {
          iVar1 = 0x1c;
        }
        uVar6 = *(undefined4 *)(param_1 + iVar1);
        if (*(int *)(**(int **)(_UNK_00fcd57c + 0xfcd240) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar5 = UnityEngine_Object__Instantiate_object__14d4dd0
                          (uVar6,uVar5,**(undefined4 **)(_UNK_00fcd580 + 0xfcd278));
        if (*(int *)(**(int **)(_UNK_00fcd584 + 0xfcd290) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_40,iVar7,0);
        iVar7 = *(int *)(param_1 + 0x40);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(iVar7 + 8);
        uVar8 = *(uint *)(iVar7 + 0xc);
        piVar3 = *(int **)(_UNK_00fcd588 + 0xfcd304);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar12 = fVar12 + fStack_3c;
        if (uVar8 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar8 + 1;
          puVar11 = (undefined4 *)(iVar1 + uVar8 * 4 + 0x10);
          *puVar11 = uVar5;
          thunk_FUN_00ec5080(puVar11,uVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar7,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
        }
        puVar11 = *(undefined4 **)(_UNK_00fcd58c + 0xfcd364);
      }
    } while (0 < iVar2);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Reverse_267f560
            (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_00fcd590 + 0xfcd384));
  iVar2 = 0;
  puVar9 = *(undefined4 **)(_UNK_00fcd594 + 0xfcd39c);
  puVar11 = *(undefined4 **)(_UNK_00fcd598 + 0xfcd3a4);
  while( true ) {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) <= iVar2) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_40,*(int *)(param_1 + 0x28),0);
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_sizeDelta_3613820(*(int *)(param_1 + 0x28),uStack_40,fVar12,0);
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = System_Collections_Generic_List_object___get_Item_267d814(iVar7,iVar2,*puVar9);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_Collections_Generic_List_object___get_Item_267d814(iVar1,iVar2 + -1,*puVar9);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x40),iVar2,*puVar11);
    if (*(int *)(param_1 + 0x14) == 0) break;
    iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar10,iVar2,*puVar9);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar3 + 0xe0))(piVar3,uVar5,iVar7 - iVar1,iVar2,*(undefined4 *)(*piVar3 + 0xe4));
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

