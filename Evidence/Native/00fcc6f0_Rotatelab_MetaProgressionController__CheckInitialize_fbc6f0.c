/* IL2CPP: Rotatelab.MetaProgressionController$$CheckInitialize
void Rotatelab_MetaProgressionController__CheckInitialize (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$CheckInitialize
   void Rotatelab_MetaProgressionController__CheckInitialize (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__CheckInitialize_fbc6f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uStack_40;
  float fStack_3c;
  
  pcVar5 = (char *)(_UNK_00fcc7d4 + 0xfcc704);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc7d8 + 0xfcc718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc7dc + 0xfcc724));
    *pcVar5 = '\x01';
  }
  Rotatelab_MetaProgressionController__CheckCurrentCity_fbcad4(param_1);
  Rotatelab_MetaProgressionController__SetArtwork_fbce98(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_00fcc7e0 + 0xfcc754) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
  piVar1 = *(int **)(_UNK_00fcc7e4 + 0xfcc7a0);
  iVar3 = *piVar1;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar1;
  }
  if (iVar2 < *(int *)(*(int *)(iVar3 + 0x5c) + 0x20)) {
    return;
  }
  pcVar5 = (char *)(_UNK_00fcd53c + 0xfcd008);
  if (*pcVar5 == '\0') {
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
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = *(int *)(**(int **)(_UNK_00fcd56c + 0xfcd0ac) + 0x74);
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (iVar2 == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar6,uVar7,**(undefined4 **)(_UNK_00fcd570 + 0xfcd0d8));
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_RectOffset__get_top_35baee4(iVar3,0);
  iVar3 = UnityEngine_RectOffset__get_bottom_35baf54(iVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_40,iVar2,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = (float)VectorSignedToFloat(iVar3 + iVar4,(byte)(in_fpscr >> 0x16) & 3);
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
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = iVar2 + -1;
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar2,*puVar9);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar3 + 8);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0xc);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar10 <= *(int *)(iVar4 + 0xc)) {
        uVar6 = *(undefined4 *)(param_1 + 0x28);
        iVar4 = 0x18;
        if (*(char *)(iVar3 + 0xc) == '\0') {
          iVar4 = 0x1c;
        }
        uVar7 = *(undefined4 *)(param_1 + iVar4);
        if (*(int *)(**(int **)(_UNK_00fcd57c + 0xfcd240) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar6 = UnityEngine_Object__Instantiate_object__14d4dd0
                          (uVar7,uVar6,**(undefined4 **)(_UNK_00fcd580 + 0xfcd278));
        if (*(int *)(**(int **)(_UNK_00fcd584 + 0xfcd290) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar6,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_40,iVar3,0);
        iVar3 = *(int *)(param_1 + 0x40);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *(int *)(iVar3 + 8);
        uVar8 = *(uint *)(iVar3 + 0xc);
        piVar1 = *(int **)(_UNK_00fcd588 + 0xfcd304);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar12 = fVar12 + fStack_3c;
        if (uVar8 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar8 + 1;
          puVar11 = (undefined4 *)(iVar4 + uVar8 * 4 + 0x10);
          *puVar11 = uVar6;
          thunk_FUN_00ec5080(puVar11,uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x10) + 0x60) + 0x38));
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
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar2,*puVar9);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814(iVar4,iVar2 + -1,*puVar9);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar4 + 8);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar1 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x40),iVar2,*puVar11);
    if (*(int *)(param_1 + 0x14) == 0) break;
    iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar10,iVar2,*puVar9);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,uVar6,iVar3 - iVar4,iVar2,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

