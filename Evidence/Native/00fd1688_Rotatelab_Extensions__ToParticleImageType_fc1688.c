/* IL2CPP: Rotatelab.Extensions$$ToParticleImageType
int32_t Rotatelab_Extensions__ToParticleImageType (int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ToParticleImageType
   int32_t Rotatelab_Extensions__ToParticleImageType (int32_t currencyType, const MethodInfo*
   method); */

void Rotatelab_Extensions__ToParticleImageType_fc1688(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uStack_14;
  
  if ((param_1 < 10) && ((0x21fU >> (param_1 & 0xff) & 1) != 0)) {
    return;
  }
  uStack_14 = param_1;
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd1748 + 0xfd16c8));
  uVar1 = FUN_00ec393c(uVar1,&uStack_14);
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd174c + 0xfd16e0));
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd1750 + 0xfd16f0));
  uVar1 = System_String__Format_2a0c264(uVar2,uVar3,uVar1,0);
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd1754 + 0xfd1714));
  uVar2 = thunk_FUN_00f00cdc();
  System_ArgumentException___ctor_2b113a4(uVar2,uVar1,0);
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd1758 + 0xfd1734));
  func_0x00ec3920(uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

