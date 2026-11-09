/* IL2CPP: Rotatelab.Audio.AudioManager$$.ctor
void Rotatelab_Audio_AudioManager___ctor (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$.ctor
   void Rotatelab_Audio_AudioManager___ctor (Rotatelab_Audio_AudioManager_o* __this, const
   MethodInfo* method); */

int Rotatelab_Audio_AudioManager___ctor_108eca8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_0109ee44 + 0x109ecbc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee48 + 0x109ecd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee4c + 0x109ecdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee50 + 0x109ece8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee54 + 0x109ecf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee58 + 0x109ed00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee5c + 0x109ed0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee60 + 0x109ed18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ee64 + 0x109ed24));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0109ee68 + 0x109ed38);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar1,**(undefined4 **)(_UNK_0109ee6c + 0x109ed50),1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar1,**(undefined4 **)(_UNK_0109ee70 + 0x109ed84),1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  puVar3 = *(undefined4 **)(_UNK_0109ee74 + 0x109edb8);
  *(undefined4 *)(param_1 + 0x24) = 0x43340000;
  *(undefined4 *)(param_1 + 0x28) = 0x3e19999a;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,0x20,**(undefined4 **)(_UNK_0109ee78 + 0x109edd8));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109ee7c + 0x109edfc));
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar1,0x20,**(undefined4 **)(_UNK_0109ee80 + 0x109ee14));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x34),uVar1);
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

