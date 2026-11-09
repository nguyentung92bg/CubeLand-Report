/* IL2CPP: Rotatelab.Pool.BulletPool$$ClearBulletsInScene
void Rotatelab_Pool_BulletPool__ClearBulletsInScene (Rotatelab_Pool_BulletPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$ClearBulletsInScene
   void Rotatelab_Pool_BulletPool__ClearBulletsInScene (Rotatelab_Pool_BulletPool_o* __this, const
   MethodInfo* method); */

void Rotatelab_Pool_BulletPool__ClearBulletsInScene_11031c4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01113270 + 0x11131d8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113274 + 0x11131ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113278 + 0x11131f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111327c + 0x1113204));
    *pcVar2 = '\x01';
  }
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) < 1) break;
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x28),0,**(undefined4 **)(_UNK_01113280 + 0x1113230));
    Rotatelab_Pool_ObjectPool_object___Recycle_1857b50
              (param_1,uVar1,**(undefined4 **)(_UNK_01113284 + 0x1113248));
  }
  return;
}

