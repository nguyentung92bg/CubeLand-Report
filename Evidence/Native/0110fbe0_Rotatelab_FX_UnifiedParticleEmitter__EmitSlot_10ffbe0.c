/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitSlot
void Rotatelab_FX_UnifiedParticleEmitter__EmitSlot (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, UnityEngine_Vector3_o worldPosition, UnityEngine_Color_o rootColor, UnityEngine_Color_o childColor, int32_t count, float startSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitSlot
   void Rotatelab_FX_UnifiedParticleEmitter__EmitSlot (Rotatelab_FX_UnifiedParticleEmitter_o*
   __this, int32_t slotIndex, UnityEngine_Vector3_o worldPosition, UnityEngine_Color_o rootColor,
   UnityEngine_Color_o childColor, int32_t count, float startSize, const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__EmitSlot_10ffbe0
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uStack_34;
  int iStack_30;
  
  pcVar2 = (char *)(_UNK_0110fd28 + 0x110fc00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fd2c + 0x110fc18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fd30 + 0x110fc24));
    *pcVar2 = '\x01';
  }
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_2 < *(int *)(*(int *)(param_1 + 0x18) + 0xc)) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_UnifiedParticleEmitter_Instance___get_Item_27b0a14
                (&uStack_34,*(int *)(param_1 + 0x18),param_2,
                 **(undefined4 **)(_UNK_0110fd34 + 0x110fc80));
      Rotatelab_FX_UnifiedParticleEmitter__EmitInto_10ffd94
                (uStack_34,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if ((iStack_30 != 0) && (uVar1 = *(uint *)(iStack_30 + 0xc), 0 < (int)uVar1)) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          Rotatelab_FX_UnifiedParticleEmitter__EmitInto_10ffd94
                    (*(undefined4 *)(iStack_30 + 0x10 + uVar3 * 4),param_3,param_4,param_5,param_10,
                     param_11,param_12,param_13);
          uVar1 = *(uint *)(iStack_30 + 0xc);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar1);
      }
    }
  }
  return;
}

