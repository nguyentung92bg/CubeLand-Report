/* IL2CPP: Rotatelab.Boosters.CannonRig$$.ctor
void Rotatelab_Boosters_CannonRig___ctor (Rotatelab_Boosters_CannonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$.ctor
   void Rotatelab_Boosters_CannonRig___ctor (Rotatelab_Boosters_CannonRig_o* __this, const
   MethodInfo* method); */

int Rotatelab_Boosters_CannonRig___ctor_1134d78(int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (char *)(_UNK_01144e40 + 0x1144d8c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144e44 + 0x1144da0));
    *pcVar4 = '\x01';
  }
  pcVar4 = (char *)(_UNK_01144e48 + 0x1144dc0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xc0400000;
  cVar1 = *pcVar4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144e4c + 0x1144de0));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined8 **)(**(int **)(_UNK_01144e50 + 0x1144e04) + 0x5c);
  uVar5 = *puVar2;
  puVar3 = *(undefined4 **)(_UNK_01144e54 + 0x1144e1c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(param_1 + 0x44) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x48) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x4c) = *puVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_00ec5080();
  pcVar4 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

