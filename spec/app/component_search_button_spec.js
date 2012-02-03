describe("search button", function() {
  var t, C, c;

  beforeEach(function() {
    dojo.require('mulberry.components.buttons.SearchButton');
    dojo.require('mulberry.app.URL');

    t = dojo.byId('test');
    C = mulberry.components.buttons.SearchButton;
    if (c) { c.destroy(); }
  });

  it("should place the button on the page", function() {
    c = C().placeAt(t);
    expect(t.querySelector(getRootSelector(c))).toBeTruthy();
    expect(t.innerHTML).toMatch(c.i18n_text);
    expect(c.preventWhenAnimating).toBeTruthy();
    expect(dojo.hasClass(c.domNode, 'search')).toBeTruthy();
    expect(c.url).toEqual(mulberry.app.URL.search());
  });

});
