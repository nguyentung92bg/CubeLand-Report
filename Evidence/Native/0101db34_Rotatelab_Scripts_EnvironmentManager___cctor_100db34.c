/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$.cctor
void Rotatelab_Scripts_EnvironmentManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$.cctor
   void Rotatelab_Scripts_EnvironmentManager___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_EnvironmentManager___cctor_100db34(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0101dbd0 + 0x101db44);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101dbd4 + 0x101db58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101dbd8 + 0x101db64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101dbdc + 0x101db70));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101dbe0 + 0x101db84));
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar3,**(undefined4 **)(_UNK_0101dbe4 + 0x101dba0),0,0);
  piVar4 = *(int **)(_UNK_0101dbe8 + 0x101dbb4);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

