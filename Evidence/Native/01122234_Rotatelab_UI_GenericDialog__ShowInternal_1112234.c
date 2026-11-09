/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowInternal
void Rotatelab_UI_GenericDialog__ShowInternal (Rotatelab_UI_GenericDialog_o* __this, Rotatelab_UI_GenericDialog_DialogData_o* dialog, const MethodInfo* method);
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
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowInternal
   void Rotatelab_UI_GenericDialog__ShowInternal (Rotatelab_UI_GenericDialog_o* __this,
   Rotatelab_UI_GenericDialog_DialogData_o* dialog, const MethodInfo* method); */

uint Rotatelab_UI_GenericDialog__ShowInternal_1112234(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  pcVar6 = (char *)(_UNK_01122560 + 0x112224c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122564 + 0x1122260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122568 + 0x112226c));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 0x10);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))
            (piVar7,*(undefined4 *)(param_2 + 8),*(undefined4 *)(*piVar7 + 0x2b4));
  piVar7 = *(int **)(param_1 + 0x14);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))
            (piVar7,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(*piVar7 + 0x2b4));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x24),*(undefined4 *)(param_2 + 0x10),0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x24),0);
  piVar7 = *(int **)(_UNK_0112256c + 0x1122328);
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = UnityEngine_Object__op_Inequality_36018e4(uVar10,0,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar10,0);
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x14);
    piVar8 = *(int **)(param_1 + 0x18);
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
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0x2b0))
              (piVar8,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 8),*(undefined4 *)(*piVar8 + 0x2b4));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = 1;
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar10,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1 < *(int *)(*(int *)(param_2 + 0x14) + 0xc),0);
  *(int *)(param_1 + 0x28) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x28),param_2);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  puVar9 = *(undefined4 **)(_UNK_01122570 + 0x11224f8);
  uVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar10,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),1,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  iVar2 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar3) {
        puVar9 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined4 *)FUN_00efdb38(piVar7,iVar3,4);
LAB_01494a00:
  uVar4 = (*(code *)*puVar9)(piVar7,param_1,puVar9[1]);
  if (uVar4 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar3 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) {
          puVar9 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar9)(piVar7,param_1,puVar9[1]);
  }
  return uVar4 ^ 1;
}

