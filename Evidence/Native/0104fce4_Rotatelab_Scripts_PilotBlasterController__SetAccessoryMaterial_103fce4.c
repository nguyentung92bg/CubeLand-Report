/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$SetAccessoryMaterial
void Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_MeshRenderer_o* renderer, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$SetAccessoryMaterial
   void Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial
   (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_MeshRenderer_o* renderer,
   UnityEngine_Material_o* material, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
               (int param_1,int param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0104fe3c + 0x104fd00);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104fe40 + 0x104fd14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104fe44 + 0x104fd20));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = 0;
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(param_2,param_3,0);
  if (*(char *)(param_1 + 0xc2) != '\0') {
    piVar2 = (int *)(param_1 + 0x14c);
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104fe48 + 0x104fd90));
      UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar5,0);
      *piVar2 = iVar5;
      thunk_FUN_00ec5080(piVar2,iVar5);
      iVar5 = *piVar2;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    UnityEngine_MaterialPropertyBlock__Clear_35c3a70(iVar5,0);
    piVar6 = *(int **)(_UNK_0104fe4c + 0x104fdd8);
    iVar1 = *piVar2;
    iVar5 = *piVar6;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar6;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MaterialPropertyBlock__SetFloat_35c4024(iVar1,**(undefined4 **)(iVar5 + 0x5c),0,0);
    iVar5 = *piVar2;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar4 = (char *)(_UNK_035d4e1c + 0x35d4d94);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4e20 + 0x35d4da8),iVar5,0);
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(param_2,0);
  }
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar5 + 8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4e24 + 0x35d4dec);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4e28 + 0x35d4dfc);
    *(code **)(_UNK_035d4e2c + 0x35d4e0c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035d4e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1,uVar3);
  return;
}

