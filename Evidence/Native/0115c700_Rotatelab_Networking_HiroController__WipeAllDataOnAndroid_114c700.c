/* IL2CPP: Rotatelab.Networking.HiroController$$WipeAllDataOnAndroid
bool Rotatelab_Networking_HiroController__WipeAllDataOnAndroid (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0115cab0) */
/* WARNING: Removing unreachable block (ram,0x0115ca28) */
/* WARNING: Removing unreachable block (ram,0x0115cb38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Networking.HiroController$$WipeAllDataOnAndroid
   bool Rotatelab_Networking_HiroController__WipeAllDataOnAndroid (const MethodInfo* method); */

undefined4 Rotatelab_Networking_HiroController__WipeAllDataOnAndroid_114c700(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  
  pcVar8 = (char *)(_UNK_0115cc30 + 0x115c714);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc34 + 0x115c728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc38 + 0x115c734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc3c + 0x115c740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc40 + 0x115c74c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc44 + 0x115c758));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc48 + 0x115c764));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc4c + 0x115c770));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc50 + 0x115c77c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc54 + 0x115c788));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc58 + 0x115c794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc5c + 0x115c7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cc60 + 0x115c7ac));
    *pcVar8 = '\x01';
  }
  piVar1 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115cc64 + 0x115c7c4));
  UnityEngine_AndroidJavaClass___ctor_35864ac(piVar1,**(undefined4 **)(_UNK_0115cc68 + 0x115c7e8),0)
  ;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)UnityEngine_AndroidJavaObject__GetStatic_object__13b1d54
                            (piVar1,**(undefined4 **)(_UNK_0115cc70 + 0x115c824),
                             **(undefined4 **)(_UNK_0115cc6c + 0x115c818));
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0115cc74 + 0x115c840),1);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(_UNK_0115cc78 + 0x115c874);
  iVar4 = *piVar10;
  if ((iVar4 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  iVar4 = *piVar10;
  if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[4] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 4,iVar4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)UnityEngine_AndroidJavaObject__Call_object__13afad0
                            (piVar2,**(undefined4 **)(_UNK_0115cc80 + 0x115c8e4),piVar3,
                             **(undefined4 **)(_UNK_0115cc7c + 0x115c8d8));
  iVar9 = **(int **)(_UNK_0115cc84 + 0x115c904);
  iVar4 = *(int *)(iVar9 + 0x1c);
  if (iVar4 == 0) {
    FUN_00efd7c4(iVar9);
    iVar4 = *(int *)(iVar9 + 0x1c);
  }
  iVar4 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = UnityEngine_AndroidJavaObject__Call_bool__13af86c
                    (piVar3,**(undefined4 **)(_UNK_0115cc8c + 0x115c994),
                     **(undefined4 **)(iVar4 + 0x5c),**(undefined4 **)(_UNK_0115cc88 + 0x115c988));
  if (piVar3 != (int *)0x0) {
    iVar4 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0115cc90 + 0x115c9c4)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_0115ca0c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_0115cc90 + 0x115c9c4),0);
LAB_0115ca0c:
    (*(code *)*puVar6)(piVar3,puVar6[1]);
  }
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0115cc94 + 0x115ca4c)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
          goto LAB_0115ca94;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar2,**(int **)(_UNK_0115cc94 + 0x115ca4c),0);
LAB_0115ca94:
    (*(code *)*puVar6)(piVar2,puVar6[1]);
  }
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_0115cc98 + 0x115cad4)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
          goto LAB_0115cb1c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_0115cc98 + 0x115cad4),0);
LAB_0115cb1c:
    (*(code *)*puVar6)(piVar1,puVar6[1]);
  }
  return uVar5;
}

