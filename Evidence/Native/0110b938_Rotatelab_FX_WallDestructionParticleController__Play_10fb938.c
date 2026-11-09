/* IL2CPP: Rotatelab.FX.WallDestructionParticleController$$Play
void Rotatelab_FX_WallDestructionParticleController__Play (Rotatelab_FX_WallDestructionParticleController_o* __this, UnityEngine_Vector3_o position, float sizeMultiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.WallDestructionParticleController$$Play
   void Rotatelab_FX_WallDestructionParticleController__Play
   (Rotatelab_FX_WallDestructionParticleController_o* __this, UnityEngine_Vector3_o position, float
   sizeMultiplier, const MethodInfo* method); */

void Rotatelab_FX_WallDestructionParticleController__Play_10fb938
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  int iVar3;
  
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar1,param_2,param_3,param_4,0);
  Rotatelab_FX_WallDestructionParticleController__ApplyStartSize_10fbaa4
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x30),param_5);
  Rotatelab_FX_WallDestructionParticleController__ApplyStartSize_10fbaa4
            (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
             *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
             *(undefined4 *)(param_1 + 0x48),param_5);
  Rotatelab_FX_WallDestructionParticleController__ApplyStartSize_10fbaa4
            (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x4c),
             *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
             *(undefined4 *)(param_1 + 0x60),param_5);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    Rotatelab_FX_WallDestructionParticleController__ApplyTrailWidth_10fbb34
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x78),param_5);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(param_1 + 0x10),0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(param_1 + 0x14),0,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_0369e8f8 + 0x369e87c);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e8fc + 0x369e890),0,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0369e900 + 0x369e8c8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0369e904 + 0x369e8d8);
    *(code **)(_UNK_0369e908 + 0x369e8e8) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0369e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,0);
  return;
}

