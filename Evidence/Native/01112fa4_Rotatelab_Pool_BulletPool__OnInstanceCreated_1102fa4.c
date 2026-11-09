/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceCreated
void Rotatelab_Pool_BulletPool__OnInstanceCreated (Rotatelab_Pool_BulletPool_o* __this, Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$OnInstanceCreated
   void Rotatelab_Pool_BulletPool__OnInstanceCreated (Rotatelab_Pool_BulletPool_o* __this,
   Rotatelab_Scripts_BulletController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_BulletPool__OnInstanceCreated_1102fa4(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01113010 + 0x1112fbc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113014 + 0x1112fd0));
    *pcVar4 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceCreated_1857cf0
            (param_1,param_2,**(undefined4 **)(_UNK_01113018 + 0x1112fe8));
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x6c);
    *puVar3 = param_1;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

