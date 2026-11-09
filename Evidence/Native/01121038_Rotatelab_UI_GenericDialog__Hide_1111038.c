/* IL2CPP: Rotatelab.UI.GenericDialog$$Hide
void Rotatelab_UI_GenericDialog__Hide (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$Hide
   void Rotatelab_UI_GenericDialog__Hide (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo*
   method); */

uint Rotatelab_UI_GenericDialog__Hide_1111038(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_011211b0 + 0x112104c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211b4 + 0x1121060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211b8 + 0x112106c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211bc + 0x1121078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211c0 + 0x1121084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011211c4 + 0x1121090));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    thunk_FUN_00ec5080();
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    puVar11 = *(undefined4 **)(_UNK_011211d0 + 0x1121144);
    uVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
    if (*(int *)(**(int **)(_UNK_011211d4 + 0x1121158) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_011211c8 + 0x11210c0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Extensions__RemoveAtAndReturn_object__1488144
                      (uVar8,0,**(undefined4 **)(_UNK_011211cc + 0x11210e4));
    pcVar7 = (char *)(_UNK_01122560 + 0x112224c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01122564 + 0x1122260));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01122568 + 0x112226c));
      *pcVar7 = '\x01';
    }
    piVar9 = *(int **)(param_1 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = *(code **)(*piVar9 + 0x2b0);
    (*pcVar6)(piVar9,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(*piVar9 + 0x2b4),pcVar6,unaff_r4,
              unaff_r5,unaff_r6);
    piVar9 = *(int **)(param_1 + 0x14);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x2b0))
              (piVar9,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(*piVar9 + 0x2b4));
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x24),*(undefined4 *)(iVar1 + 0x10),0);
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x24),0);
    piVar9 = *(int **)(_UNK_0112256c + 0x1122328);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,uVar8,0);
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x14);
      piVar10 = *(int **)(param_1 + 0x18);
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
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar10 + 0x2b0))
                (piVar10,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 8),
                 *(undefined4 *)(*piVar10 + 0x2b4));
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,uVar8,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1 < *(int *)(*(int *)(iVar1 + 0x14) + 0xc),0);
    *(int *)(param_1 + 0x28) = iVar1;
    thunk_FUN_00ec5080((int *)(param_1 + 0x28),iVar1);
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    puVar11 = *(undefined4 **)(_UNK_01122570 + 0x11224f8);
    uVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = 1;
  }
  pcVar7 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),iVar2,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(iVar1 + 0x1c);
  iVar1 = *(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      FUN_00ec3934();
    }
    iVar1 = **(int **)(_UNK_01027c00 + 0x1027bdc);
    if ((*(int *)(iVar1 + 0x1c) == 0) &&
       (FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4)), *(int *)(iVar1 + 0x1c) == 0)) {
      FUN_00efd7c4(iVar1);
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (piVar9,param_1,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    if (-1 < (int)uVar4) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (piVar9,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
    }
    return ~uVar4 >> 0x1f;
  }
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *piVar9;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar2) {
        puVar11 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar11 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,4);
LAB_01494a00:
  uVar4 = (*(code *)*puVar11)(piVar9,param_1,puVar11[1]);
  if (uVar4 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar1) {
          puVar11 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined4 *)FUN_00efdb38(piVar9,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar11)(piVar9,param_1,puVar11[1]);
  }
  return uVar4 ^ 1;
}

