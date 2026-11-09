/* IL2CPP: Rotatelab.UI.GenericDialog$$Show
void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this, Rotatelab_UI_GenericDialog_DialogData_o* dialog, const MethodInfo* method);
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
   void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this,
   Rotatelab_UI_GenericDialog_DialogData_o* dialog, const MethodInfo* method); */

uint Rotatelab_UI_GenericDialog__Show_1111378(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 unaff_r4;
  char *pcVar8;
  undefined4 unaff_r5;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint uVar11;
  undefined4 unaff_r8;
  int *piVar12;
  undefined4 unaff_r9;
  int *piVar13;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar8 = (char *)(_UNK_0112179c + 0x1121394);
  if (*pcVar8 == '\0') {
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
    *pcVar8 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011217cc + 0x1121434));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar13 = (int *)(iVar1 + 8);
  *piVar13 = param_2;
  thunk_FUN_00ec5080(piVar13,param_2);
  iVar5 = *piVar13;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar5 = Rotatelab_UI_GenericDialog_DialogData__ContentEquals_1112574();
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2c);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011217d0 + 0x1121494));
      System_Predicate_object____ctor_1876380
                (uVar3,iVar1,**(undefined4 **)(_UNK_011217d4 + 0x11214b4),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Collections_Generic_List_object___Find_267e1bc
                        (iVar5,uVar3,**(undefined4 **)(_UNK_011217d8 + 0x11214d8));
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    if (iVar5 != 0) {
      iVar1 = 4;
      piVar12 = *(int **)(_UNK_011217dc + 0x11214fc);
      while( true ) {
        if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar11 = iVar1 - 4;
        if (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) <= (int)uVar11) break;
        iVar9 = *(int *)(iVar5 + 0x14);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar9 = *(int *)(iVar9 + iVar1 * 4);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar10 = (int *)(iVar9 + 0xc);
        if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(*piVar13 + 0x14);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar9 = *(int *)(iVar9 + iVar1 * 4);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar2 = (int *)System_Delegate__Combine_2bbca94(*piVar10,*(undefined4 *)(iVar9 + 0xc),0);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
          *piVar10 = 0;
        }
        else {
          iVar9 = *piVar12;
          if (*piVar2 != iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar2);
          }
          *piVar10 = (int)piVar2;
          if (*piVar2 != iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar2);
          }
        }
        thunk_FUN_00ec5080(piVar10,piVar2);
        iVar1 = iVar1 + 1;
      }
      if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = System_String__Concat_2a0b574
                        (**(undefined4 **)(_UNK_011217e4 + 0x1121638),
                         *(undefined4 *)(*piVar13 + 0xc),
                         **(undefined4 **)(_UNK_011217e0 + 0x112162c),0);
      if (*(int *)(**(int **)(_UNK_011217e8 + 0x1121650) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar8 = (char *)(_UNK_035c1d64 + 0x35c1c58);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
        *pcVar8 = '\x01';
      }
      piVar13 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar8 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
        *pcVar8 = '\x01';
      }
      iVar1 = *piVar13;
      if (*(int *)(iVar1 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar1 = *piVar13;
      }
      piVar13 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
      if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar13;
      uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xd8);
            goto LAB_035c1d48;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)thunk_FUN_00efdb38(piVar13,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)*puVar4)(piVar13,3,uVar3,puVar4[1]);
      return uVar11;
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
    iVar9 = *(int *)(param_1 + 0x2c);
    if (*(int *)(iVar5 + 0xc) != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(_UNK_011217f0 + 0x11216c0);
      uVar11 = *(uint *)(iVar9 + 0xc);
      do {
        uVar6 = uVar11;
        iVar5 = *(int *)(param_1 + 0x2c);
        if ((int)uVar6 < 1) goto LAB_0112171c;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar5,uVar6 - 1,*puVar4);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar11 = uVar6 - 1;
      } while (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) == 0);
      iVar5 = *(int *)(param_1 + 0x2c);
LAB_0112171c:
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar13;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = **(int **)(_UNK_011217f4 + 0x112174c);
      uVar11 = *(uint *)(iVar5 + 0xc);
      if (uVar11 < uVar6) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException_2b951cc(0xd,0x1b,0);
        uVar11 = *(uint *)(iVar5 + 0xc);
      }
      if (*(int *)(iVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar11 == *(uint *)(*(int *)(iVar5 + 8) + 0xc)) {
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar5,uVar11 + 1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x3c))
        ;
        uVar11 = *(uint *)(iVar5 + 0xc);
      }
      iVar9 = *(int *)(iVar5 + 8);
      if ((int)uVar6 < (int)uVar11) {
        System_Array__Copy_2b96ff4
                  (iVar9,uVar6,iVar9,uVar6 + 1,uVar11 - uVar6,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                   unaff_r8,unaff_r9,unaff_r11,unaff_lr);
        iVar9 = *(int *)(iVar5 + 8);
      }
      if (iVar9 != 0) {
        if (uVar6 < *(uint *)(iVar9 + 0xc)) {
          piVar13 = (int *)(iVar9 + uVar6 * 4 + 0x10);
          *piVar13 = iVar1;
          thunk_FUN_00ec5080(piVar13,iVar1);
          uVar11 = *(int *)(iVar5 + 0xc) + 1;
          *(uint *)(iVar5 + 0xc) = uVar11;
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          return uVar11;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Insert_267e98c
              (iVar9,0,*(undefined4 *)(param_1 + 0x28),**(undefined4 **)(_UNK_011217ec + 0x1121780))
    ;
    iVar5 = *piVar13;
  }
  pcVar8 = (char *)(_UNK_01122560 + 0x112224c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122564 + 0x1122260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122568 + 0x112226c));
    *pcVar8 = '\x01';
  }
  piVar13 = *(int **)(param_1 + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = *(code **)(*piVar13 + 0x2b0);
  (*pcVar7)(piVar13,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(*piVar13 + 0x2b4),pcVar7,unaff_r4,
            unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  piVar13 = *(int **)(param_1 + 0x14);
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar13 + 0x2b0))
            (piVar13,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(*piVar13 + 0x2b4));
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
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x24),0);
  piVar13 = *(int **)(_UNK_0112256c + 0x1122328);
  uVar3 = *(undefined4 *)(iVar5 + 0x10);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar3,0);
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar5 + 0x14) + 0xc) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar5 + 0x14);
    piVar12 = *(int **)(param_1 + 0x18);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar12 + 0x2b0))
              (piVar12,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 8),*(undefined4 *)(*piVar12 + 0x2b4)
              );
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = 1;
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar3,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1 < *(int *)(*(int *)(iVar5 + 0x14) + 0xc),0);
  *(int *)(param_1 + 0x28) = iVar5;
  thunk_FUN_00ec5080((int *)(param_1 + 0x28),iVar5);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  puVar4 = *(undefined4 **)(_UNK_01122570 + 0x11224f8);
  uVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar8 = '\x01';
  }
  piVar13 = *(int **)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  iVar9 = *piVar13;
  uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar5) {
        puVar4 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar5,4);
LAB_01494a00:
  uVar11 = (*(code *)*puVar4)(piVar13,param_1,puVar4[1]);
  if (uVar11 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar5 = *piVar13;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar1) {
          puVar4 = (undefined4 *)(iVar5 + *piVar12 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar4)(piVar13,param_1,puVar4[1]);
  }
  return uVar11 ^ 1;
}

