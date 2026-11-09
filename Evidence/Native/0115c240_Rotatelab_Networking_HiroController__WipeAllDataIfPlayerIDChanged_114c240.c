/* IL2CPP: Rotatelab.Networking.HiroController$$WipeAllDataIfPlayerIDChanged
void Rotatelab_Networking_HiroController__WipeAllDataIfPlayerIDChanged (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0115cab0) */
/* WARNING: Removing unreachable block (ram,0x0115ca28) */
/* WARNING: Removing unreachable block (ram,0x0115cb38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Networking.HiroController$$WipeAllDataIfPlayerIDChanged
   void Rotatelab_Networking_HiroController__WipeAllDataIfPlayerIDChanged (const MethodInfo*
   method); */

int Rotatelab_Networking_HiroController__WipeAllDataIfPlayerIDChanged_114c240(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_0115c3bc + 0x115c250);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c3c0 + 0x115c264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c3c4 + 0x115c270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c3c8 + 0x115c27c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c3cc + 0x115c288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c3d0 + 0x115c294));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0115c3d4 + 0x115c2a8);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  uVar2 = Rotatelab_Save_SavedValue_object___op_Implicit_1a8bd1c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0115c3d8 + 0x115c2cc));
  iVar1 = System_String__op_Inequality_2a09760(uVar2,**(undefined4 **)(_UNK_0115c3dc + 0x115c2e4),0)
  ;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8
            (**(int **)(iVar1 + 0x5c),
             **(undefined4 **)(*(int *)(*(int *)(_UNK_0115c3e0 + 0x115c318) + 0x48) + 0x5c),
             **(undefined4 **)(_UNK_0115c3e4 + 0x115c344));
  UnityEngine_PlayerPrefs__DeleteAll_35f790c(0);
  UnityEngine_PlayerPrefs__Save_35f7950(0);
  if (*(int *)(**(int **)(_UNK_0115c3e8 + 0x115c368) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__get_persistentDataPath_35a750c(0);
  Rotatelab_Networking_HiroController___WipeAllDataIfPlayerIDChanged_g__ClearDirectory_86_0_114c3ec
            ();
  UnityEngine_Application__get_temporaryCachePath_35a7670(0);
  Rotatelab_Networking_HiroController___WipeAllDataIfPlayerIDChanged_g__ClearDirectory_86_0_114c3ec
            ();
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 != 0xb) {
    return iVar1;
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_0115cc30 + 0x115c714);
  if (*pcVar7 == '\0') {
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
    *pcVar7 = '\x01';
  }
  piVar9 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115cc64 + 0x115c7c4));
  UnityEngine_AndroidJavaClass___ctor_35864ac(piVar9,**(undefined4 **)(_UNK_0115cc68 + 0x115c7e8),0)
  ;
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)UnityEngine_AndroidJavaObject__GetStatic_object__13b1d54
                            (piVar9,**(undefined4 **)(_UNK_0115cc70 + 0x115c824),
                             **(undefined4 **)(_UNK_0115cc6c + 0x115c818));
  piVar4 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0115cc74 + 0x115c840),1);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(_UNK_0115cc78 + 0x115c874);
  iVar1 = *piVar10;
  if ((iVar1 != 0) &&
     (iVar1 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar1 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  iVar1 = *piVar10;
  if (piVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[4] = iVar1;
  thunk_FUN_00ec5080(piVar4 + 4,iVar1);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)UnityEngine_AndroidJavaObject__Call_object__13afad0
                            (piVar3,**(undefined4 **)(_UNK_0115cc80 + 0x115c8e4),piVar4,
                             **(undefined4 **)(_UNK_0115cc7c + 0x115c8d8));
  iVar8 = **(int **)(_UNK_0115cc84 + 0x115c904);
  iVar1 = *(int *)(iVar8 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar8);
    iVar1 = *(int *)(iVar8 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_AndroidJavaObject__Call_bool__13af86c
                    (piVar4,**(undefined4 **)(_UNK_0115cc8c + 0x115c994),
                     **(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0115cc88 + 0x115c988));
  if (piVar4 != (int *)0x0) {
    iVar8 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0115cc90 + 0x115c9c4)) {
          puVar5 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
          goto LAB_0115ca0c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar4,**(int **)(_UNK_0115cc90 + 0x115c9c4),0);
LAB_0115ca0c:
    (*(code *)*puVar5)(piVar4,puVar5[1]);
  }
  if (piVar3 != (int *)0x0) {
    iVar8 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_0115cc94 + 0x115ca4c)) {
          puVar5 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
          goto LAB_0115ca94;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_0115cc94 + 0x115ca4c),0);
LAB_0115ca94:
    (*(code *)*puVar5)(piVar3,puVar5[1]);
  }
  if (piVar9 != (int *)0x0) {
    iVar8 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar6 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0115cc98 + 0x115cad4)) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_0115cb1c;
        }
        uVar6 = uVar6 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0115cc98 + 0x115cad4),0);
LAB_0115cb1c:
    (*(code *)*puVar5)(piVar9,puVar5[1]);
  }
  return iVar1;
}

