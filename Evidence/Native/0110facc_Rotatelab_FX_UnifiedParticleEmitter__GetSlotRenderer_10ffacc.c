/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$GetSlotRenderer
UnityEngine_ParticleSystemRenderer_o* Rotatelab_FX_UnifiedParticleEmitter__GetSlotRenderer (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$GetSlotRenderer
   UnityEngine_ParticleSystemRenderer_o* Rotatelab_FX_UnifiedParticleEmitter__GetSlotRenderer
   (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, const MethodInfo* method); */

undefined4 Rotatelab_FX_UnifiedParticleEmitter__GetSlotRenderer_10ffacc(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_0110fb74 + 0x110fae8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fb78 + 0x110fafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110fb7c + 0x110fb08));
    *pcVar1 = '\x01';
  }
  uVar2 = 0;
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
                (auStack_28,*(int *)(param_1 + 0x18),param_2,
                 **(undefined4 **)(_UNK_0110fb80 + 0x110fb5c));
      uVar2 = uStack_1c;
    }
  }
  return uVar2;
}

