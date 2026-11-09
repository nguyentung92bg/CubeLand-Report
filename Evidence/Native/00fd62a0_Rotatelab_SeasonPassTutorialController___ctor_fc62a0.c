/* IL2CPP: Rotatelab.SeasonPassTutorialController$$.ctor
void Rotatelab_SeasonPassTutorialController___ctor (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$.ctor
   void Rotatelab_SeasonPassTutorialController___ctor (Rotatelab_SeasonPassTutorialController_o*
   __this, const MethodInfo* method); */

int Rotatelab_SeasonPassTutorialController___ctor_fc62a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd6348 + 0xfd62b4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd634c + 0xfd62c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd6350 + 0xfd62d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd6354 + 0xfd62e0));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_00fd6358 + 0xfd62f8);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar2,**(undefined4 **)(_UNK_00fd635c + 0xfd6318),0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

