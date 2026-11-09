/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshMaterials
void Rotatelab_Scripts_BlasterController__RefreshMaterials (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshMaterials
   void Rotatelab_Scripts_BlasterController__RefreshMaterials
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__RefreshMaterials_1034b84(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01044e08 + 0x1044b98);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044e0c + 0x1044bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044e10 + 0x1044bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044e14 + 0x1044bc4));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_01044e18 + 0x1044bd8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar7,uVar6,0);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)UnityEngine_Renderer__get_sharedMaterials_35c59c0(*(int *)(param_1 + 0x50),0);
  cVar1 = *(char *)(param_1 + 0xc2);
  puVar9 = *(undefined4 **)(_UNK_01044e1c + 0x1044c34);
  iVar4 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar9);
  if (cVar1 == '\0') {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Scripts_BlasterColorDataSo__GetBodyMaterialByType_ff48a0
                      (iVar4,*(undefined4 *)(param_1 + 0x10c),iVar2,0);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar4 != 0) &&
       (iVar8 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar8 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar3[4] = iVar4;
    thunk_FUN_00ec5080(piVar3 + 4,iVar4);
    iVar4 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar9);
    iVar8 = *(int *)(param_1 + 0x110);
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_1 + 0x10c);
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Scripts_BlasterColorDataSo__GetBodyMaterialByType_ff48a0(iVar4,iVar8,iVar2,0);
    if ((iVar4 != 0) &&
       (iVar8 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar8 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar3[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar3[5] = iVar4;
    thunk_FUN_00ec5080(piVar3 + 5,iVar4);
    if (iVar2 == 0) {
      iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if ((iVar2 != 0) &&
         (iVar4 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
        uVar6 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar6,0);
      }
      if ((uint)piVar3[3] < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar3[6] = iVar2;
      thunk_FUN_00ec5080(piVar3 + 6,iVar2);
    }
  }
  else {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Array__Fill_object__163b68c
              (piVar3,*(undefined4 *)(iVar4 + 0x18),**(undefined4 **)(_UNK_01044e20 + 0x1044c5c));
  }
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar3[3];
  }
  if (iVar2 != 0) {
    pcVar5 = (char *)(_UNK_035d4ccc + 0x35d4c20);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4cd0 + 0x35d4c34));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4cd4 + 0x35d4c40));
      *pcVar5 = '\x01';
    }
    if (piVar3 == (int *)0x0) {
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_35f9694
                (0,**(undefined4 **)(_UNK_035d4cd8 + 0x35d4c60),0);
    }
    if (iVar2 != 0) {
      iVar8 = *(int *)(iVar2 + 8);
      if (iVar8 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4cdc + 0x35d4c98);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4ce0 + 0x35d4ca8);
          *(code **)(_UNK_035d4ce4 + 0x35d4cb8) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d4cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar8,piVar3,iVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4(0,piVar3,0);
}

