/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$Awake
void Rotatelab_FX_UnifiedParticleEmitter__Awake (Rotatelab_FX_UnifiedParticleEmitter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$Awake
   void Rotatelab_FX_UnifiedParticleEmitter__Awake (Rotatelab_FX_UnifiedParticleEmitter_o* __this,
   const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__Awake_10fefe8(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_0110f148 + 0x110f000);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f14c + 0x110f014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f150 + 0x110f020));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_0110f154 + 0x110f034) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    do {
      iVar5 = *(int *)(param_1 + 0x18);
      Rotatelab_FX_UnifiedParticleEmitter__SpawnInstance_10ff15c(&uStack_34);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar5 + 8);
      uVar7 = *(uint *)(iVar5 + 0xc);
      piVar2 = *(int **)(_UNK_0110f158 + 0x110f0c8);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar7 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar7 + 1;
        iVar6 = iVar6 + uVar7 * 0x10;
        *(undefined4 *)(iVar6 + 0x10) = uStack_34;
        *(undefined4 *)(iVar6 + 0x14) = uStack_30;
        *(undefined4 *)(iVar6 + 0x18) = uStack_2c;
        *(undefined4 *)(iVar6 + 0x1c) = uStack_28;
        thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x10),0);
      }
      else {
        System_Collections_Generic_List_UnifiedParticleEmitter_Instance___AddWithResize_27b0d88
                  (iVar5,uStack_34,uStack_30,uStack_2c,uStack_28,
                   *(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

