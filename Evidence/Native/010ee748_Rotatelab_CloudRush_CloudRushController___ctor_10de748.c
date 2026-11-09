/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$.ctor
void Rotatelab_CloudRush_CloudRushController___ctor (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$.ctor
   void Rotatelab_CloudRush_CloudRushController___ctor (Rotatelab_CloudRush_CloudRushController_o*
   __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushController___ctor_10de748(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_010ee89c + 0x10ee760);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee8a0 + 0x10ee774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee8a4 + 0x10ee780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee8a8 + 0x10ee78c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee8ac + 0x10ee798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee8b0 + 0x10ee7a4));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_010ee8b4 + 0x10ee7bc);
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedDateTime___ctor_107971c
            (uVar1,**(undefined4 **)(_UNK_010ee8b8 + 0x10ee7e0),0,0,1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedDateTime___ctor_107971c
            (uVar1,**(undefined4 **)(_UNK_010ee8bc + 0x10ee820),0,0,0,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedDateTime___ctor_107971c
            (uVar1,**(undefined4 **)(_UNK_010ee8c0 + 0x10ee860),0,0,0,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

