/* IL2CPP: Rotatelab.Scripts.BulletController$$.ctor
void Rotatelab_Scripts_BulletController___ctor (Rotatelab_Scripts_BulletController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletController$$.ctor
   void Rotatelab_Scripts_BulletController___ctor (Rotatelab_Scripts_BulletController_o* __this,
   const MethodInfo* method); */

int Rotatelab_Scripts_BulletController___ctor_ff9470(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = _UNK_010094a8;
  uVar1 = _UNK_010094a0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
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

