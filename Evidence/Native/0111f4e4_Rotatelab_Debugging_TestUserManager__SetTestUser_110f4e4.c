/* IL2CPP: Rotatelab.Debugging.TestUserManager$$SetTestUser
void Rotatelab_Debugging_TestUserManager__SetTestUser (Rotatelab_Debugging_TestUserManager_o* __this, bool isTestUser, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$SetTestUser
   void Rotatelab_Debugging_TestUserManager__SetTestUser (Rotatelab_Debugging_TestUserManager_o*
   __this, bool isTestUser, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__SetTestUser_110f4e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_0111f6b8 + 0x111f4fc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6bc + 0x111f510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c0 + 0x111f51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c4 + 0x111f528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c8 + 0x111f534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6cc + 0x111f540));
    *pcVar7 = '\x01';
  }
  *(char *)(param_1 + 0x28) = (char)param_2;
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_0111f6d0 + 0x111f560) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_isEditor_35a9d10(0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                        (*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_0111f6d4 + 0x111f620));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Behaviour__set_enabled_35fd7dc(iVar1,1,0);
      goto LAB_0111f648;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0111f6d8 + 0x111f5b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__DestroyImmediate_36099bc(uVar2,0);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_00ec5080((int *)(param_1 + 0x1c),0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),0);
LAB_0111f648:
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(int *)(**(int **)(_UNK_0111f6dc + 0x111f660) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_isEditor_35a9d10(0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_0111f6e0 + 0x111f690) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = **(undefined4 **)(_UNK_0111f6e4 + 0x111f6b0);
      pcVar7 = (char *)(_UNK_035c1d64 + 0x35c1c58);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
        *pcVar7 = '\x01';
      }
      piVar6 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar7 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
        *pcVar7 = '\x01';
      }
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar1 = *piVar6;
      }
      piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
            goto LAB_035c1d48;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(piVar6,3,uVar2,puVar3[1]);
      return;
    }
  }
  return;
}

