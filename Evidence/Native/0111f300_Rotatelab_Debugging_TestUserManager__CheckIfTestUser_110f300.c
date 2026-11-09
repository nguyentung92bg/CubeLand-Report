/* IL2CPP: Rotatelab.Debugging.TestUserManager$$CheckIfTestUser
void Rotatelab_Debugging_TestUserManager__CheckIfTestUser (Rotatelab_Debugging_TestUserManager_o* __this, RemoteStringSO_o* remoteTestUsers, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$CheckIfTestUser
   void Rotatelab_Debugging_TestUserManager__CheckIfTestUser (Rotatelab_Debugging_TestUserManager_o*
   __this, RemoteStringSO_o* remoteTestUsers, System_String_o* id, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__CheckIfTestUser_110f300
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_0111f4a0 + 0x111f31c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4a4 + 0x111f330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4a8 + 0x111f33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4ac + 0x111f348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4b0 + 0x111f354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4b4 + 0x111f360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4b8 + 0x111f36c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f4bc + 0x111f378));
    *pcVar9 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111f4c0 + 0x111f38c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_3);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = RemoteVariableSO_object___get_value_1a822c4
                    (param_2,**(undefined4 **)(_UNK_0111f4c4 + 0x111f3d0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_String__Split_2a0df50(iVar2,0x7c,0,0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111f4c8 + 0x111f40c));
  System_Predicate_object____ctor_1876380
            (uVar4,iVar1,**(undefined4 **)(_UNK_0111f4cc + 0x111f428),0);
  if (*(int *)(**(int **)(_UNK_0111f4d0 + 0x111f43c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Exists_object__1486804
                    (uVar3,uVar4,**(undefined4 **)(_UNK_0111f4d4 + 0x111f45c));
  if (iVar1 != 0) {
    UnityEngine_PlayerPrefs__SetInt_35f6b0c(**(undefined4 **)(_UNK_0111f4d8 + 0x111f484),0xa8f,0);
    UnityEngine_PlayerPrefs__Save_35f7950(0);
  }
  pcVar9 = (char *)(_UNK_0111f6b8 + 0x111f4fc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6bc + 0x111f510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c0 + 0x111f51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c4 + 0x111f528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6c8 + 0x111f534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f6cc + 0x111f540));
    *pcVar9 = '\x01';
  }
  *(char *)(param_1 + 0x28) = (char)iVar1;
  if (iVar1 != 0) {
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
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0111f6d8 + 0x111f5b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__DestroyImmediate_36099bc(uVar3,0);
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
      uVar3 = **(undefined4 **)(_UNK_0111f6e4 + 0x111f6b0);
      pcVar9 = (char *)(_UNK_035c1d64 + 0x35c1c58);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
        *pcVar9 = '\x01';
      }
      piVar8 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
        *pcVar9 = '\x01';
      }
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar1 = *piVar8;
      }
      piVar8 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar8;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd8);
            goto LAB_035c1d48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)thunk_FUN_00efdb38(piVar8,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(piVar8,3,uVar3,puVar5[1]);
      return;
    }
  }
  return;
}

