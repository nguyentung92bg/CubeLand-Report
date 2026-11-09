/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$.cctor
void Rotatelab_UI_SlicedFilledImage___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$.cctor
   void Rotatelab_UI_SlicedFilledImage___cctor (const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage___cctor_11230f8(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01133234 + 0x1133108);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01133238 + 0x113311c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113323c + 0x1133128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01133240 + 0x1133134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01133244 + 0x1133140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01133248 + 0x113314c));
    *pcVar4 = '\x01';
  }
  uVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_0113324c + 0x1133164),4);
  piVar6 = *(int **)(_UNK_01133250 + 0x1133178);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c));
  puVar5 = *(undefined4 **)(_UNK_01133254 + 0x113319c);
  uVar3 = FUN_00ec388c(*puVar5,4);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = FUN_00ec388c(*puVar5,4);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = FUN_00ec388c(*puVar5,4);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01133258 + 0x1133200));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar3,**(undefined4 **)(_UNK_0113325c + 0x1133214));
  puVar5 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
  *puVar5 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

