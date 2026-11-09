/* IL2CPP: Rotatelab.UI.GenericDialog$$Show
void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027bc0) */
/* WARNING: Removing unreachable block (ram,0x01027bc8) */
/* WARNING: Removing unreachable block (ram,0x01027bcc) */
/* WARNING: Removing unreachable block (ram,0x014984c8) */
/* WARNING: Removing unreachable block (ram,0x014984e0) */
/* WARNING: Removing unreachable block (ram,0x014984e8) */
/* WARNING: Removing unreachable block (ram,0x014984f0) */
/* WARNING: Removing unreachable block (ram,0x014984f4) */
/* WARNING: Removing unreachable block (ram,0x01498514) */
/* WARNING: Removing unreachable block (ram,0x0149852c) */
/* WARNING: Removing unreachable block (ram,0x01498530) */
/* WARNING: Removing unreachable block (ram,0x01498544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$Show
   void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this, System_String_o*
   title, System_String_o* message, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons,
   const MethodInfo* method); */

uint Rotatelab_UI_GenericDialog__Show_1111980
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 unaff_r4;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar12;
  undefined4 unaff_r7;
  int *piVar13;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int *piVar14;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar9 = (char *)(_UNK_01121a04 + 0x11219a0);
  cVar1 = *pcVar9;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121a08 + 0x11219b8));
    cVar1 = '\x01';
    *pcVar9 = '\x01';
  }
  Rotatelab_UI_GenericDialog__EnsureAtLeastOneDialogButton_11121ac(cVar1,param_4);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121a0c + 0x11219d4));
  Rotatelab_UI_GenericDialog_DialogData___ctor_1111318(iVar5,param_2,param_3,0,param_4);
  pcVar9 = (char *)(_UNK_0112179c + 0x1121394);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217a0 + 0x11213a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217a4 + 0x11213b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217a8 + 0x11213c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217ac + 0x11213cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217b0 + 0x11213d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217b4 + 0x11213e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217b8 + 0x11213f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217bc + 0x11213fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217c0 + 0x1121408));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217c4 + 0x1121414));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011217c8 + 0x1121420));
    *pcVar9 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011217cc + 0x1121434));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar14 = (int *)(iVar2 + 8);
  *piVar14 = iVar5;
  thunk_FUN_00ec5080(piVar14,iVar5);
  iVar5 = *piVar14;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar5 = Rotatelab_UI_GenericDialog_DialogData__ContentEquals_1112574();
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2c);
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011217d0 + 0x1121494));
      System_Predicate_object____ctor_1876380
                (uVar4,iVar2,**(undefined4 **)(_UNK_011217d4 + 0x11214b4),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Collections_Generic_List_object___Find_267e1bc
                        (iVar5,uVar4,**(undefined4 **)(_UNK_011217d8 + 0x11214d8));
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    if (iVar5 != 0) {
      iVar2 = 4;
      piVar13 = *(int **)(_UNK_011217dc + 0x11214fc);
      while( true ) {
        if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar12 = iVar2 - 4;
        if (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) <= (int)uVar12) break;
        iVar10 = *(int *)(iVar5 + 0x14);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar10 + iVar2 * 4);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar11 = (int *)(iVar10 + 0xc);
        if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar10 = *(int *)(*piVar14 + 0x14);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar10 + iVar2 * 4);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = (int *)System_Delegate__Combine_2bbca94(*piVar11,*(undefined4 *)(iVar10 + 0xc),0);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
          *piVar11 = 0;
        }
        else {
          iVar10 = *piVar13;
          if (*piVar3 != iVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar3);
          }
          *piVar11 = (int)piVar3;
          if (*piVar3 != iVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar3);
          }
        }
        thunk_FUN_00ec5080(piVar11,piVar3);
        iVar2 = iVar2 + 1;
      }
      if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = System_String__Concat_2a0b574
                        (**(undefined4 **)(_UNK_011217e4 + 0x1121638),
                         *(undefined4 *)(*piVar14 + 0xc),
                         **(undefined4 **)(_UNK_011217e0 + 0x112162c),0);
      if (*(int *)(**(int **)(_UNK_011217e8 + 0x1121650) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_035c1d64 + 0x35c1c58);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
        *pcVar9 = '\x01';
      }
      piVar14 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
        *pcVar9 = '\x01';
      }
      iVar5 = *piVar14;
      if (*(int *)(iVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar5 = *piVar14;
      }
      piVar14 = *(int **)(*(int *)(iVar5 + 0x5c) + 4);
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *piVar14;
      uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar13 * 8 + 0xd8);
            goto LAB_035c1d48;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined4 *)thunk_FUN_00efdb38(piVar14,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*(code *)*puVar6)(piVar14,3,uVar4,puVar6[1]);
      return uVar12;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(param_1 + 0x2c);
    if (*(int *)(iVar5 + 0xc) != 0) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar6 = *(undefined4 **)(_UNK_011217f0 + 0x11216c0);
      uVar12 = *(uint *)(iVar10 + 0xc);
      do {
        uVar7 = uVar12;
        iVar5 = *(int *)(param_1 + 0x2c);
        if ((int)uVar7 < 1) goto LAB_0112171c;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar5,uVar7 - 1,*puVar6);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar12 = uVar7 - 1;
      } while (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) == 0);
      iVar5 = *(int *)(param_1 + 0x2c);
LAB_0112171c:
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *piVar14;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = **(int **)(_UNK_011217f4 + 0x112174c);
      uVar12 = *(uint *)(iVar5 + 0xc);
      if (uVar12 < uVar7) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException_2b951cc(0xd,0x1b,0);
        uVar12 = *(uint *)(iVar5 + 0xc);
      }
      if (*(int *)(iVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar12 == *(uint *)(*(int *)(iVar5 + 8) + 0xc)) {
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar5,uVar12 + 1,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x3c)
                  );
        uVar12 = *(uint *)(iVar5 + 0xc);
      }
      iVar10 = *(int *)(iVar5 + 8);
      if ((int)uVar7 < (int)uVar12) {
        System_Array__Copy_2b96ff4
                  (iVar10,uVar7,iVar10,uVar7 + 1,uVar12 - uVar7,0,unaff_r4,unaff_r5,unaff_r6,
                   unaff_r7,unaff_r8,unaff_r9,unaff_r11,unaff_lr);
        iVar10 = *(int *)(iVar5 + 8);
      }
      if (iVar10 != 0) {
        if (uVar7 < *(uint *)(iVar10 + 0xc)) {
          piVar14 = (int *)(iVar10 + uVar7 * 4 + 0x10);
          *piVar14 = iVar2;
          thunk_FUN_00ec5080(piVar14,iVar2);
          uVar12 = *(int *)(iVar5 + 0xc) + 1;
          *(uint *)(iVar5 + 0xc) = uVar12;
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          return uVar12;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Insert_267e98c
              (iVar10,0,*(undefined4 *)(param_1 + 0x28),**(undefined4 **)(_UNK_011217ec + 0x1121780)
              );
    iVar5 = *piVar14;
  }
  pcVar9 = (char *)(_UNK_01122560 + 0x112224c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122564 + 0x1122260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122568 + 0x112226c));
    *pcVar9 = '\x01';
  }
  piVar14 = *(int **)(param_1 + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = *(code **)(*piVar14 + 0x2b0);
  (*pcVar8)(piVar14,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(*piVar14 + 0x2b4),pcVar8,unaff_r4,
            unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  piVar14 = *(int **)(param_1 + 0x14);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar14 + 0x2b0))
            (piVar14,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(*piVar14 + 0x2b4));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x24),*(undefined4 *)(iVar5 + 0x10),0)
  ;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x24),0);
  piVar14 = *(int **)(_UNK_0112256c + 0x1122328);
  uVar4 = *(undefined4 *)(iVar5 + 0x10);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,uVar4,0);
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x14);
    piVar13 = *(int **)(param_1 + 0x18);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar13 + 0x2b0))
              (piVar13,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 8),*(undefined4 *)(*piVar13 + 0x2b4)
              );
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = 1;
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,uVar4,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,1 < *(int *)(*(int *)(iVar5 + 0x14) + 0xc),0);
  *(int *)(param_1 + 0x28) = iVar5;
  thunk_FUN_00ec5080((int *)(param_1 + 0x28),iVar5);
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar5,1,0);
  puVar6 = *(undefined4 **)(_UNK_01122570 + 0x11224f8);
  uVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar9 = '\x01';
  }
  piVar14 = *(int **)(iVar5 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar5 + 0x1c) == 0) {
    FUN_00efd7c4(iVar5);
  }
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar10 = *piVar14;
  uVar12 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar13[-1] == iVar2) {
        puVar6 = (undefined4 *)(iVar10 + *piVar13 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 2;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined4 *)FUN_00efdb38(piVar14,iVar2,4);
LAB_01494a00:
  uVar12 = (*(code *)*puVar6)(piVar14,param_1,puVar6[1]);
  if (uVar12 == 0) {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768(iVar5);
    }
    iVar2 = *piVar14;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar13[-1] == iVar5) {
          puVar6 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar14,iVar5,2);
LAB_01494a8c:
    (*(code *)*puVar6)(piVar14,param_1,puVar6[1]);
  }
  return uVar12 ^ 1;
}

