/* IL2CPP: Rotatelab.Scripts.ConnectionController$$Init
void Rotatelab_Scripts_ConnectionController__Init (Rotatelab_Scripts_ConnectionController_o* __this, Rotatelab_Scripts_BlasterController_o* connectedBlaster, UnityEngine_Transform_o* blasterVisual, UnityEngine_Transform_o* lookAt, UnityEngine_Color_o color, bool isIced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$Init
   void Rotatelab_Scripts_ConnectionController__Init (Rotatelab_Scripts_ConnectionController_o*
   __this, Rotatelab_Scripts_BlasterController_o* connectedBlaster, UnityEngine_Transform_o*
   blasterVisual, UnityEngine_Transform_o* lookAt, UnityEngine_Color_o color, bool isIced, const
   MethodInfo* method); */

void Rotatelab_Scripts_ConnectionController__Init_10320c0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010421fc + 0x10420e4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042200 + 0x1042114));
    *pcVar7 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x24) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),param_3);
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),param_4);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x10),0);
  piVar3 = (int *)(param_1 + 0x30);
  *piVar3 = iVar1;
  thunk_FUN_00ec5080(piVar3,iVar1);
  piVar6 = *(int **)(_UNK_01042204 + 0x104218c);
  iVar5 = *piVar3;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetFloat_35caf8c
            (iVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10),0x3e99999a,0);
  Rotatelab_Scripts_ConnectionController__UpdateColor_1039740
            (param_1,param_5,param_6,param_7,param_8);
  pcVar7 = (char *)(_UNK_01043808 + 0x1043770);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104380c + 0x1043784));
    *pcVar7 = '\x01';
  }
  if (param_9 == 0) {
    piVar3 = (int *)(param_1 + 0x30);
  }
  else {
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_01043810 + 0x10437a0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)(iVar1 + 0x20);
  }
  iVar1 = *piVar3;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(*(int *)(param_1 + 0x10),iVar1,0);
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_035d4aa8 + 0x35d49f8);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4aac + 0x35d4a0c),iVar1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4ab0 + 0x35d4a18));
    *pcVar7 = '\x01';
  }
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 8);
    if (iVar4 != 0) {
      if (*(int *)(**(int **)(_UNK_035d4ab4 + 0x35d4a50) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4ab8 + 0x35d4a78);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4abc + 0x35d4a88);
        *(code **)(_UNK_035d4ac0 + 0x35d4a98) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x035d4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar4,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

