/* IL2CPP: Rotatelab.Scripts.CameraManager$$.ctor
void Rotatelab_Scripts_CameraManager___ctor (Rotatelab_Scripts_CameraManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$.ctor
   void Rotatelab_Scripts_CameraManager___ctor (Rotatelab_Scripts_CameraManager_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_CameraManager___ctor_ffbdb4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0100be68 + 0x100bdc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100be6c + 0x100bddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100be70 + 0x100bde8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100be74 + 0x100bdf4));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_0100be78 + 0x100be18);
  *(undefined4 *)(param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x14) = 0x41600000;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,2,**(undefined4 **)(_UNK_0100be7c + 0x100be38));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar2);
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

